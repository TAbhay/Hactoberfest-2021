<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta charset="utf-8">
	<title>Bidding Zone - Message</title>

 
<head>
	
	<link rel="stylesheet" href="jquery-ui/development/themes/base/jquery.ui.all.css">
	<script src="jquery-ui/development/jquery-1.5.1.js"></script>
	<script src="jquery-ui/development/external/jquery.bgiframe-2.1.2.jss"></script>
	<script src="jquery-ui/development/ui/jquery.ui.core.js"></script>
	<script src="jquery-ui/development/ui/jquery.ui.widget.js"></script>
	<script src="jquery-ui/development/ui/jquery.ui.mouse.js"></script>
	<script src="jquery-ui/development/ui/jquery.ui.draggable.js"></script>
	<script src="jquery-ui/development/ui/jquery.ui.position.js"></script>
	<script src="jquery-ui/development/ui/jquery.ui.resizable.js"></script>
	<script src="jquery-ui/development/ui/jquery.ui.dialog.js"></script>
	<link rel="stylesheet" href="jquery-ui/development/demos/demos.css">
	<script>
	$(function() {
		// a workaround for a flaw in the demo system (http://dev.jqueryui.com/ticket/4375), ignore!
		$( "#dialog:ui-dialog" ).dialog( "destroy" );
	
		$( "#dialog-modal" ).dialog({
			height: 140,
			modal: true
		});
	});
	</script>
</head>
<body>
    
    <div id="templatmeo_content">
		<div class="demo">
			<div id="dialog-modal" title="Message">
				<center>
				<p><?php
	session_start();
	require("functions.php");
	if(isset($_POST['submit'])){
		$high = $_POST['high'];
		$id = $_SESSION['prodid'];
		$bidamount = $_POST['bidamount'];
		$query = mysql_query("SELECT * FROM products WHERE productid = '$id'") or die (mysql_error());
		$prod = mysql_fetch_array($query);
		$userid = $_SESSION['ID'];
		$query2 = mysql_query("SELECT * FROM member WHERE memberid = '$userid'") or die (mysql_error());
		$user = mysql_fetch_array($query2);
		$biddername = $user['memberid'];
		$prodname = $prod['prodname'];
		if($bidamount > $high){
		mysql_query("INSERT INTO bidreport(productid,bidder,biddatetime,bidamount,status) VALUES ('$id','$biddername',now(),'$bidamount',0)");
		echo "Congratulations ".$_SESSION['user']."! You are the highest bidder for Item ".$prodname."<br /><br /><a href='details.php?id=".$id."'>Back</a>";
		
		
		}elseif($bidamount <= $high){
			echo "Your Bid is not counted for the amount is lower than the highest bid or does not exceed the starting bid<br /><br /><a href=details.php?id=".$id.">Back</a>";
		}
	}
	
?></p>
				<p></a></p>
				</center>
			</div>
		</div>
	</div>
       
    
   
    
</body>
</html>
