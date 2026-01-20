<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>

<!--<form action="https://www.paypal.com/cgi-bin/webscr" method="post">-->
<form action="https://www.sandbox.paypal.com/cgi-bin/webscr"  method="post">

<!-- the cmd parameter is set to _xclick for a Buy Now button -->
<input type="hidden" name="cmd" value="_xclick">

<input type="hidden" name="business" value="jpabs78@gmail.com">
<input type="hidden" name="item_name" value="Aw sus">
<input type="hidden" name="item_number" value="123">
<input type="hidden" name="amount" value="100.00">
<input type="hidden" name="no_shipping" value="1">
<input type="hidden" name="no_note" value="1">
<input type="hidden" name="currency_code" value="PHP">
<input type="hidden" name="lc" value="GB">
<input type="hidden" name="bn" value="PP-BuyNowBF">
<input type="image" src="https://www.paypal.com/en_US/i/btn/x-click-but23.gif" border="0" name="submit" alt="Make payments with PayPal - it's fast, free and secure!">
<img alt="" border="0" src="https://www.paypal.com/en_GB/i/scr/pixel.gif" width="1" height="1">

<!-- Payment confirmed -->
<input type="hidden" name="return" value="http://127.0.0.1/OnlineBiddingSystem/testpaypal.php"> 

 <!-- Payment cancelled -->
<input type="hidden" name="cancel_return" value="http://www.chmscians.com/paypal/cancel.php">

<input type="hidden" name="rm" value="2">
<input type="hidden" name="notify_url" value="http://127.0.0.1/OnlineBiddingSystem/forpaypal/ipn_for_reg.php" /> 
<input type="hidden" name="custom" value="any other custom field you want to pass">     

</form>


</body>
</html>
