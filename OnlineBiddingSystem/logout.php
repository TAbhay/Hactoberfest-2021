<?php
	session_start();
	session_destroy();
	session_start();
	$_SESSION['logged'] = 'guest';
	header('location:home.php');
?>