<?php
	require("../db.php");
	$productid = $_POST['id'];
	mysql_query("UPDATE products SET status = 1 WHERE productid = '$productid' ") or die (mysql_error());
?>
<?php 
	$datenow = date('l,F d,Y');
	$endedsum = mysql_query("SELECT * FROM products WHERE duedate < '$datenow' AND status = 0") or die(mysql_error());
	$counters = 0;
	WHILE($stat = mysql_fetch_array($endedsum)){
		$counters++;
	}
	echo $counters;
	
?>