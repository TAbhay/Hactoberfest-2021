<?php
	require("db.php");
	session_start();
	$_SESSION['logged'] = "active";
	$item_number = $_SESSION['ID'];
	mysql_query("UPDATE member SET verification = 'yes' WHERE memberid = '$item_number' ")or die(mysql_error());
	header("location:myaccount.php");
?>
<input type="text" value="type something" />

<script>
$('input').bind('blur', function() {

$(this).val(function(i, val) {
alert($(this).val());

});

});
//value = $("#txt_name").val();

//value = $("#txt_name").attr('value')
</script>
