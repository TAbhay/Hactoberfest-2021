<?php
	session_start();
	require ("db.php");
	require("htmls.php");
	require("functions.php");
	headhtml();
?>
  <div id="main_content">
    <div id="menu_tab">
      <div class="left_menu_corner"></div>
      <ul class="menu">
        <li><a href="home.php" class="nav2"> Home</a></li>
        <li class="divider"></li>
        <li><a href="prodcateg.php" class="nav2">Products</a></li>
        <li class="divider"></li>
        <li><a href="contact.php" class="nav2">About Us</a></li>
        <li class="divider"></li>
<?php account(); ?>
<script type='text/javascript'>
	jQuery(document).ready( function() {
		jQuery('.nav3').hide();
		jQuery('.nav4').click( function() {
			jQuery('.nav3').toggle('fade');	
		});
	});
</script>
      </ul>
      <div class="right_menu_corner"></div>
    </div>
    <!-- end of menu tab -->
    <div class="crumb_navigation"> Navigation: <a href="home.php">Home</a> &lt; <span class="current">Sign In</span> </div>
    <div class="left_content">
      <div class="title_box">Categories</div>
      <ul class="left_menu">
        <?php
			categories();
		?>
      <div class="title_box">News & Updates</div>
      <div class="border_box">
        <div class="product_title"><a href="details.html">Motorola 156 MX-VL</a></div>
        <div class="product_img"><a href="details.html"><img src="images/laptop.png" alt="" border="0" /></a></div>
        <div class="prod_price"><span class="reduce">350$</span> <span class="price">270$</span></div>
      </div>
      <div class="title_box">Announcements</div>
      <div class="border_box">
        <input type="text" name="newsletter" class="newsletter_input" value="your email"/>
        <a href="http://all-free-download.com/free-website-templates/" class="join">join</a> </div>
      <div class="banner_adds"> <a href="#"><img src="images/bann2.jpg" alt="" border="0" /></a> </div>
    </div>
    <!-- end of left content -->
    <div class="center_content">
      <div class="center_title_bar">User Log In</div>
      <div class="prod_box_big">
        <div class="top_prod_box_big"></div>
        <div class="center_prod_box_big">
						<div class="welc"><center>Welcome</center></div>
						<div class="welcsub"><center><p>Welcome, your account is not yet completely activated. You are required to complete this steps in order to participate in bidding activities on this site.<p></center></div>
			<div class='logreg'>
				<div class="loginb">
					<div class="top_prod_box"></div>
					<div class="center_prod_box">
					  <div class="product_title"><a>Activate Your Account</a></div>
					  <h3>To Activate Account, Open the Database, Go to Member Table, Look for your 'userid' row and check 'Verification' row. Set the value from 'no' to 'yes'</h3>
					  <!--<form action="https://www.paypal.com/cgi-bin/webscr" method="post">-->
						<form action="#"  method="post">
						<?php
							$userid = $_SESSION['ID'];
						?>
						<!-- the cmd parameter is set to _xclick for a Buy Now button -->
						<input type="hidden" name="cmd" value="_xclick">

						<input type="hidden" name="business" value="segotierfretz@gmail.com">
						<input type="hidden" name="item_name" value="Registration Fee">
						<input type="hidden" name="item_number" value="<?php echo $userid; ?>">
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
						<input type="hidden" name="cancel_return" value="http://127.0.0.1/OnlineBiddingSystem/cancel.php">

						<input type="hidden" name="rm" value="2">
						<input type="hidden" name="notify_url" value="http://127.0.0.1/OnlineBiddingSystem/forpaypal/ipn_for_reg.php" /> 
						<input type="hidden" name="custom" value="any other custom field you want to pass">     

						</form>

					</div>
				</div>
				<div class="regb">
					<div class="top_prod_box"></div>
					<div class="center_prod_box">
					  <div class="product_title"><a>Activate Later</a></div>
					  <div class="product_img"><a href='myaccount.php'>Proceed to My Account</a></div>
					</div>
				</div>
			</div>
        </div>
        <div class="bottom_prod_box_big"></div>
      </div>
    </div>
    <!-- end of center content -->
    <div class="right_content">
      
	<?php logform(); ?>
	
	  
      <div class="title_box">What’s new</div>
      <div class="border_box">
        <div class="product_title">Motorola 156 MX-VL</div>
        <div class="product_img"><a href="http://all-free-download.com/free-website-templates/"><img src="images/p2.gif" alt="" border="0" /></a></div>
        <div class="prod_price"><span class="reduce">350$</span> <span class="price">270$</span></div>
      </div>
      <div class="title_box">Manufacturers</div>
      <ul class="left_menu">
        <li class="odd"><a href="http://all-free-download.com/free-website-templates/">Sony</a></li>
        <li class="even"><a href="http://all-free-download.com/free-website-templates/">Samsung</a></li>
        <li class="odd"><a href="http://all-free-download.com/free-website-templates/">Daewoo</a></li>
        <li class="even"><a href="http://all-free-download.com/free-website-templates/">LG</a></li>
        <li class="odd"><a href="http://all-free-download.com/free-website-templates/">Fujitsu Siemens</a></li>
        <li class="even"><a href="http://all-free-download.com/free-website-templates/">Motorola</a></li>
        <li class="odd"><a href="http://all-free-download.com/free-website-templates/">Phillips</a></li>
        <li class="even"><a href="http://all-free-download.com/free-website-templates/">Beko</a></li>
      </ul>
      <div class="banner_adds"> <a href="http://all-free-download.com/free-website-templates/"><img src="images/bann1.jpg" alt="" border="0" /></a> </div>
    </div>
    <!-- end of right content -->
  </div>
  <!-- end of main content -->
<?php foothtml(); ?>
