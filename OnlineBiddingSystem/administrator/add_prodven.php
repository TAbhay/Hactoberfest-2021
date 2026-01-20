<?php
session_start();
if($_SESSION['isvalid'] != "true"){
	header("location:index.php");
}
require ("../db.php");
function cats(){
		$query = mysql_query("SELECT * FROM `pcategories`") or die (mysql_error());
		  echo "<select name ='category'>";
		  echo "<option>Select Category</option>";
		while($row = mysql_fetch_array($query)){
				
				echo "<option value='".$row['categoryid']."'>".$row['categoryname']."</option>";							
		}
				echo "</select>";
}
if (isset($_POST['prodsave'])){

	$prodname=$_POST['prodname'];
	$startingbid=$_POST['startingbid'];
	$regularprice=$_POST['regularprice'];
	$category=$_POST['category'];
	$descrpt=$_POST['descrpt'];
		if ($startingbid > 10000){
			$fdate = time() + (31 * 24 * 60 * 60);
			$duedate = date('Y-m-d',$fdate);
		}else{
			$fdate = time() + (14 * 24 * 60 * 60);
			$duedate = date('Y-m-d',$fdate);
		}
	$datenow = date("F j, Y, g:i a");
	$name = $_FILES["image"] ["name"];
	$type = $_FILES["image"] ["type"];
	$size = $_FILES["image"] ["size"];
	$temp = $_FILES["image"] ["tmp_name"];
	$error = $_FILES["image"] ["error"];
	mysql_query("INSERT INTO products(prodname,categoryid,prodescription,startingbid,prodimage,regularprice,dateposted,duedate,status) 
						VALUES ('$prodname','$category','$descrpt','$startingbid','$name','$regularprice',NOW(),'$duedate',0)") or die(mysql_error());
						echo "Product has been successfully added to database!!!<br>";
	if ($error > 0){
		die("Error uploading file! Code $error.");}
	else
	{
		if($size > 10000000) //conditions for the file
		{
		die("Format is not allowed or file size is too big!");
		}
		else
		{
		move_uploaded_file($temp,"images/products/".$name);
		}
	} 
		
		
}
			
?>	

<!DOCTYPE html> 
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" /> 
	
	<title>Bidding Zone - Administrator</title>

	<link type="text/css" href="./style.css" rel="stylesheet" />
    
	<script type='text/javascript' src='./js/jquery-1.4.2.min.js'></script>	
	<script type='text/javascript' src='./js/jquery-ui-1.8.5.custom.min.js'></script>
	<script type='text/javascript' src='./js/cufon-yui.js'></script>
	<script type='text/javascript' src='./js/colaboratelight_400.font.js'></script>
	<script type='text/javascript' src='./js/easytooltip.js'></script>
	<!--[if IE 8]>
		<script type='text/javascript' src='http://hello.amnesio.com/js/excanvas.js'></script>
		<link rel="stylesheet" href="http://hello.amnesio.com/css/IEfix.css" type="text/css" media="screen" />
	<![endif]--> 
 
	<!--[if IE 7]>
		<script type='text/javascript' src='http://hello.amnesio.com/js/excanvas.js'></script>
		<link rel="stylesheet" href="http://hello.amnesio.com/css/IEfix.css" type="text/css" media="screen" />
	<![endif]--> 
	
	<script type='text/javascript' src='./js/visualize.jquery.js'></script>
	<script type='text/javascript' src='./js/iphone-style-checkboxes.js'></script>
	<script type='text/javascript' src='./js/custom.js'></script>
<meta charset="UTF-8"></head>

<body>
	<div id="container">
		<div id="bgwrap">
			<div id="primary_left">
				<div id="menu"> <!-- navigation menu -->
					<ul>
						<li><a href="notifications.php"><img src="icons/73.png" alt /><span>Notifications</span></a></li>
                        <li><a href="bids.php" class="dashboard"><img src="icons/2.png" alt /><span class="current">Bids</span></a></li>					
						<li class="current"><a href="#"><img src="icons/36.png" alt /><span>Products</span></a>
							<ul class='showoff'>
								<li><a href="add_prodven.php">New Product</a></li>
								<li><a href="addcategory.php">New Product Category</a></li>
							</ul>
						</li>						
                        <li><a href="#"><img src="./assets/icons/small_icons_3/settings.png" alt /><span>Account</span></a>
							<ul>
								<li><a href="logout.php">Logout</a></li>
							</ul>
						</li>	
					</ul>
				</div> <!-- navigation menu end -->
			</div> <!-- sidebar end -->

			<div id="primary_right">
				<div class="inner">
					
					<h1>Welcome Administrator</h1>


						<div class="two_third column">
						  <h5>Add New Product</h5>
                           <div id="bodycon">
                          <form method="post" name="prodform" id="prodform" action="" enctype='multipart/form-data'>
                          		<div id="textcon">
                                	<p>Product Name:</p><br/>
                                 	<p>Starting Bid:</p><br/>
                                    <p>Regular Price:</p><br/>
                                    <p>Category:</p><br/>
                                 	<p>Product Description:</p><br/><br/><br/>
                                    <p>Product Image:</p><br/>
                                </div>&nbsp;
                                <div id="inputcon">
                                <ul><input type="text" name="prodname" class="namewidth"/></ul>
                                <p><input type="text" name="startingbid" class="namewidth"/></p>
                                <p><input type="text" name="regularprice" class="namewidth"/></p>
                                <p><?php cats(); ?></p>
                                 <p><textarea name="descrpt" class="namewidth" /></textarea></p>
                                 <p><input type="file" name="image" class="namewidth"/></p>
                                 <br/>
                                 <p><input type="submit" name="prodsave" value="Save Product"/></p>
                                 </div>
						</form>

                        </div>
						</div>

						<div class="one_third last column">
						  <h5></h5>
						</div>
						<hr />
						<HR>
						<HR/>
						  <div class="clearboth"></div>
						</div><!-- three_fourth last -->
					</div>
					<div class="clearboth" style="padding-bottom:20px;"></div>
				</div> <!-- inner -->
			</div> <!-- primary_right -->
		</div> <!-- bgwrap -->
	</div> <!-- container -->
</body>
</html>