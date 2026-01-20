<?php
	require("../db.php");
	$bidid = $_POST['id'];
	mysql_query("UPDATE bidreport SET status = 1 WHERE bidid = '$bidid'") or die (mysql_error());
?>