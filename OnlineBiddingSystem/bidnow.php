<?php
	session_start();
	require("functions.php");
	require("db.php");
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>Electronix Store - Contact</title>
<meta http-equiv="Content-Type" content="text/html; charset=windows-1252" />
<link rel="stylesheet" type="text/css" href="style.css" />
<!--[if IE 6]>
<link rel="stylesheet" type="text/css" href="iecss.css" />
<![endif]-->
<script type="text/javascript" src="js/boxOver.js"></script>
</head>
<body>
    <?php

		if($_SESSION['logged'] == 'guest'){
			echo"<div class='center_content'>
			  <div class='prod_box_big'>
				<div class='top_prod_box_big'></div>
				<div class='center_prod_box_big'>
				   <div class='product_img_big'>"; ?><?php echo "<a><img src = 'images/lock.png' weight='180' height='180' /></a>"; ?>
				  <?php echo"</div>
				  <div class='details_big_boxa'>
					<div class='product_title_biga'>";?><?php echo '<p align="justify" style ="font-size:20px;" >Sorry, but the system believe that you are registered as a guest, please <a href="register.php">create an acount</a> or <a href = "login.php">log-in</a> in order to perform that action</p>';?><?php echo"</div>";?>
					<?php echo'
			  </div>
			<!-- end of center content -->
		</div>';
		}else{
		$id = $_GET['id'];
		$_SESSION['prodid'] = $id;
		$query = mysql_query("SELECT * FROM products WHERE productid = '$id'") or die (mysql_error());
		$row = mysql_fetch_array($query);
		$prodid = $row['productid'];
		
		//for displaying highest bid and no of bidders
		$query2 = mysql_query("SELECT * FROM bidreport WHERE productid = '$prodid'") or die (mysql_error());
		$numberOfRows = MYSQL_NUMROWS($query2);
						if ($numberOfRows == 0)
							{
							$noofbidders = "none";
							$higestbid = "0";
							}
				 	else if ($numberOfRows > 0)
							{
							$initialize = 0;
							while($row2 = mysql_fetch_array($query2)){
								if ($row2['bidamount'] >= $initialize){
									$initialize = $row2['bidamount'];
									}
								}
							$higestbid = $initialize;
							$noofbidders = $numberOfRows;
							}
		
	?>
    <?php echo "<div class='center_content'>  
      <div class='center_title_bar'>Bid This Product</div>
      <div class='prod_box_big'>
        <div class='top_prod_box_big'></div>
        <div class='center_prod_box_big'>
           <div class='product_img_big'>"; ?><?php echo "<a><img src='administrator/images/products/".$row['prodimage']."' width='269' height='255' alt='' border='0' /></a>"; ?>
          <?php echo"</div>
          <div class='details_big_boxa'>
            <div class='product_title_biga'>";?><?php echo $row['prodname'];?><?php echo"</div>";?>
            <?php "<div class='specifications'>
				Item Condition: <span class='blue'>"; 
				echo"</span><br /><br />
				Bids: <span class='blue'>";?><?php echo $noofbidders;?><?php echo"</span><br /><br />
				Highest Bid: <span class='blue'>P";?><?php echo $higestbid;?><?php echo"</span><br /><br />
				Time Left: <span class='blue'>";?><?php echo $row['duedate'];?><?php echo'</span><br /><br />
            </div>
			<div class = "note">
            <form method = "post" action="bidconfirm.php" id="logins-form" class="logins-form"> 
                <strong>Php</strong><br /><input type="text" name="bidamount">
                <input type="submit" value="Place Bid" name="submit">
            </form>
				<span class="blue"><strong>';?><?php echo "(Enter Php".$row['startingbid']." or more)";?><?php echo'</strong></span><br /><br />
				
				<a href="#" ><span class="blue"><strong>Click here for Payment Info</strong></span></a>
			</div>
		</div>
        <div class="bottom_prod_box_big"></div>
      </div>
    <!-- end of center content -->
</div>';}?>
<!-- end of main_container -->
</html>
