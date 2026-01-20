<?php
	require("../db.php");
	$msgnotifsid = $_POST['id'];
	mysql_query("UPDATE msgnotifs SET status = 1 WHERE msgnotifsid = '$msgnotifsid'") or die (mysql_error());
?>
<?php
	$msgnum = mysql_query("SELECT * FROM msgnotifs WHERE (toid = 'admin' AND status = 0)") or die(mysql_error());
	$counter = 0;
	WHILE($stat = mysql_fetch_array($msgnum)){
	$counter++;
	}
?>