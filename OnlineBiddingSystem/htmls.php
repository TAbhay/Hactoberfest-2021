<?php
	function headhtml(){
		echo '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
			<html xmlns="http://www.w3.org/1999/xhtml">
			<head>
			<title>Bidding Zone</title>
			<meta http-equiv="Content-Type" content="text/html; charset=windows-1252" />
			<link rel="stylesheet" type="text/css" href="style.css" />
			<!--[if IE 6]>
			<link rel="stylesheet" type="text/css" href="iecss.css" />
			<![endif]-->
			<script type="text/javascript" src="js/boxOver.js"></script>
			<script type="text/javascript" src="js/windowopen.js"></script>
			<script type="text/javascript" src="js/boxOver.js"></script>
			<script type="text/javascript" src=" administrator/js/jquery-1.4.2.min.js" ></script>	
			<script type="text/javascript" src="../user/jquery.form.js"></script>
			<link href="facebox1.2/src/facebox.css" media="screen" rel="stylesheet" type="text/css" />
			<link href="../css/example.css" media="screen" rel="stylesheet" type="text/css" />
			<link rel="stylesheet" href="jquery-ui/development/themes/base/jquery.ui.all.css">
			
	
			<script src="facebox1.2/src/facebox.js" type="text/javascript"></script>
			<script type="text/javascript">
				jQuery(document).ready(function($) {
					$(" a[rel*=facebox]" ).facebox({
						loadingImage : " ../src/loading.gif" ,
						closeImage   : " ../src/closelabel.png" 
					})
				})
			</script>
			<script type="text/javascript" src="js/jquery-latest.js"></script>
			<script type="text/javascript" src="js/jquery.validate.js"></script>
			<script type="text/javascript">   
				$(document).ready(function(){
				$("#contacts-form").validate();
			  });
			</script>
			<script language="JavaScript">
			<!--
			function isNumberKey(evt)
			{
             var charCode = (evt.which) ? evt.which : event.keyCode
             if (charCode > 31 && (charCode < 48 || charCode > 57))
                return false;
    
             return true;
			}
			//-->
    
			</script>
      <style type="text/css">
        .error {
		color: red;
		font: 10px arial;
		padding: 3px;.
		 }
      </style>
	  <script type="text/javascript">
			function checkPass(){
			  //Store the password field objects into variables ...
			  var pass1 = document.getElementById("pass1");
			  var pass2 = document.getElementById("pass2");
			  //Store the Confimation Message Object ...
			  var messages = document.getElementById("confirmMessage");

			  //Set the colors we will be using ...
			  var goodColor = "#66cc66";
			  var badColor = "#ff6666";
			  //Compare the values in the password field 
			  //and the confirmation field
			  if(pass1.value == pass2.value){
				//The passwords match. 
				//Set the color to the good color and inform
				//the user that they have entered the correct password 
				if(pass1.value == "") {
					messages.innerHTML = "Password must not be blank!"
					contacts-form.pass1.focus();
			
				}
				else if(pass1.value.length < 6) {
					messages.innerHTML = "Password must contain at least six characters!"
					contacts-form.pass1.focus();
				return false;
				}else{
					pass2.style.backgroundColor = goodColor;
					messages.style.color = goodColor;
					messages.innerHTML = "Passwords Match!"
				}
			  }else{
				//The passwords do not match.
				//Set the color to the bad color and
				//notify the user.
				pass2.style.backgroundColor = badColor;
				messages.style.color = badColor;
				messages.innerHTML = "Passwords Do Not Match!"
				
			  }
			}
		</script>
			</head>
			<body>
			<div id="main_container">
			  <div class="top_bar">
			  </div>
			  <div id="header">
				<div id="logo"> <a href="#"><img src="images/logo.png" alt="" border="0" width="237" height="140" /></a> </div>
				<div class="oferte_content">
				  <div class="oferta">
					<div class="oferta_content">
					  <div class="oferta_details">
						<div class="oferta_title"></div>
						<div class="oferta_text"></div>
					</div>
					<div class="oferta_pagination"></div>
				  </div>
				</div>
				<!-- end of oferte_content-->
			  </div>';
		}
	function foothtml(){
		echo ' <div class="footer">
				<div class="left_footer"> <img src="images/footer_logo.png" alt="" width="170" height="49"/> </div>
				<div class="center_footer"> The Bidding Zone. All Rights Reserved 2008<br />
				  <a href="http://csscreme.com"><img src="images/csscreme.jpg" alt="csscreme" border="0" /></a><br />
				  <img src="images/payment.gif" alt="" /> </div>
				<div class="right_footer"> <a href="home.php">Home</a>|<a href="prodcateg.php">Product</a>|<a href="contact.php">Contact Us</a></div>
			  </div>
			</div> 
			<!-- end of main_container -->

			</html>';
			}
?>