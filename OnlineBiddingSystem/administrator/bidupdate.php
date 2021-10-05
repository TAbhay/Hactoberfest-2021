
<?php
	require("../db.php");
	$bidid = $_POST['id'];
	mysql_query("UPDATE bidreport SET status = 1 WHERE bidid = '$bidid'") or die (mysql_error());
	
?>
<?php $bidnum = mysql_query("SELECT * FROM bidreport LEFT JOIN member ON member.memberid = bidreport.bidder LEFT JOIN products ON products.productid = bidreport.productid WHERE bidreport.status = 0") or die(mysql_error());
			$count = 0;
			WHILE($stat = mysql_fetch_array($bidnum)){
				$count++;
			}
			echo $count;
	
?>