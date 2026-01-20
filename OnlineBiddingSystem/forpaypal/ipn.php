<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
</head>

<body>
<?php
require("config.php");

// this is optional but useful for setting up database access constants etc

// The majority of the following code is a direct copy of the example code specified on the Paypal site.

// Paypal POSTs HTML FORM variables to this page
// we must post all the variables back to paypal exactly unchanged and add an extra parameter cmd with value _notify-validate

// initialise a variable with the requried cmd parameter
$req = 'cmd=_notify-validate';

// go through each of the POSTed vars and add them to the variable
foreach ($_POST as $key => $value) {
$value = urlencode(stripslashes($value));
$req .= "&$key=$value";
}

// post back to PayPal system to validate
$header .= "POST /cgi-bin/webscr HTTP/1.0\r\n";
$header .= "Content-Type: application/x-www-form-urlencoded\r\n";
$header .= "Content-Length: " . strlen($req) . "\r\n\r\n";

// In a live application send it back to www.paypal.com
// but during development you will want to uswe the paypal sandbox

// comment out one of the following lines

$fp = fsockopen ('www.sandbox.paypal.com', 80, $errno, $errstr, 30);
//$fp = fsockopen ('www.paypal.com', 80, $errno, $errstr, 30);

// or use port 443 for an SSL connection
//$fp = fsockopen ('ssl://www.paypal.com', 443, $errno, $errstr, 30);


if (!$fp) {
// HTTP ERROR Failed to connect
// You can optionally send an email to let you know of the problem
// or add other error handling. 
 
 //email
 $mail_From = "From: jpabs78@gmail.com";
 $mail_To = $email;
 $mail_Subject = "HTTP ERROR";
 $mail_Body = $errstr;//error string from fsockopen

 mail($mail_To, $mail_Subject, $mail_Body, $mail_From); 

}
else
{
  fputs ($fp, $header . $req);
  while (!feof($fp)) {
    $res = fgets ($fp, 1024);
    if (strcmp ($res, "VERIFIED") == 0) {

      $item_name = $_POST['item_name'];
      $item_number = $_POST['item_number'];
      $item_colour = $_POST['custom'];  
      $payment_status = $_POST['payment_status'];
      $payment_amount = $_POST['mc_gross'];         
      $payment_currency = $_POST['mc_currency'];
      $txn_id = $_POST['txn_id'];                  
      $receiver_email = $_POST['receiver_email'];
      $payer_email = $_POST['payer_email'];

      $amount_they_should_have_paid = lookup_price($item_name); 

      if (($payment_status == 'Completed') &&  
         ($receiver_email == "jpabs78@gmail.com") &&   // receiver_email is same as your account email
         ($payment_amount == $amount_they_should_have_paid ) &&  //check they payed what they should have
         ($payment_currency == "PHP") &&  // and its the correct currency 
         (!txn_id_used_before($txn_id))) {  //txn_id isn't same as previous to stop duplicate payments. You will need to write a function to do this check.

// everything is ok
// you will probably want to do some processing here such as logging the purchase in a database etc


//        uncomment this section during development to receive an email to indicate whats happened
            $mail_To = "jpabs78@gmail.com";
            $mail_Subject = "completed status received from paypal";
            $mail_Body = "completed: $item_number  $txn_id";
            mail($mail_To, $mail_Subject, $mail_Body);


      }
      else
      {
//
// paypal replied with something other than completed or one of the security checks failed.
// you might want to do some extra processing here
//
//in this application we only accept a status of "Completed" and treat all others as failure. You may want to handle the other possibilities differently
//payment_status can be one of the following
//Canceled_Reversal: A reversal has been canceled. For example, you won a dispute with the customer, and the funds for
//                           Completed the transaction that was reversed have been returned to you.
//Completed:            The payment has been completed, and the funds have been added successfully to your account balance.
//Denied:                 You denied the payment. This happens only if the payment was previously pending because of possible
//                            reasons described for the PendingReason element.
//Expired:                 This authorization has expired and cannot be captured.
//Failed:                   The payment has failed. This happens only if the payment was made from your customerâ€™s bank account.
//Pending:                The payment is pending. See pending_reason for more information.
//Refunded:              You refunded the payment.
//Reversed:              A payment was reversed due to a chargeback or other type of reversal. The funds have been removed from
//                          your account balance and returned to the buyer. The reason for the
//                           reversal is specified in the ReasonCode element.
//Processed:            A payment has been accepted.
//Voided:                 This authorization has been voided.
//

//
// we will send an email to say that something went wrong
          $mail_To = "jpabs78@gmail.com";
          $mail_Subject = "PayPal IPN status not completed or security check fail";
//
//you can put whatever debug info you want in the email
//
          $mail_Body = "Something wrong. \n\nThe transaction ID number is: $txn_id \n\n Payment status = $payment_status \n\n Payment amount = $payment_amount";
          mail($mail_To, $mail_Subject, $mail_Body);

      }
    }
    else if (strcmp ($res, "INVALID") == 0) {
//
// Paypal didnt like what we sent. If you start getting these after system was working ok in the past, check if Paypal has altered its IPN format
//
      $mail_To = "jpabs78@gmail.com";
      $mail_Subject = "PayPal - Invalid IPN ";
      $mail_Body = "We have had an INVALID response. \n\nThe transaction ID number is: $txn_id \n\n username = $username";
      mail($mail_To, $mail_Subject, $mail_Body);
    }
  } //end of while
fclose ($fp);
}
?>

</body>
</html>
