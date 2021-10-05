<?php
	require("functions.php");
	session_start();
	require("htmls.php");
	headhtml();
?>
  <div id="main_content">
    <div id="menu_tab">
      <div class="left_menu_corner"></div>
      <ul class="menu">
        <li><a href="home.php" class="nav2">Home</a></li>
        <li class="divider" ></li>
        <li><a href="prodcateg.php" class="nav2">Products</a></li>
        <li class="divider"></li>
        <li><a href="myaccount.php" class="nav1">My account</a></li>
        <li class="divider"></li>
        <li><a href="login.php" class="nav2">Sign In</a></li>
        <li class="divider"></li>
        <li><a href="contact.php" class="nav2">Contact Us</a></li>
        <li class="divider"></li>
      </ul>
      <div class="right_menu_corner"></div>
    </div>
    <!-- end of menu tab -->
    <div class="crumb_navigation"> Navigation: <span class="current">Home</span> </div>
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
    <?php 
		$userid = $_SESSION['logged'];
		$query = mysql_query("SELECT * FROM member WHERE memberid = '$userid'") or die (mysql_error());
		$row = mysql_fetch_array($query);
	?>
    <div class="center_content">
      <div class="center_title_bar">Messages and Notifications</div>
      <div class="prod_box_big">
        <div class="top_prod_box_big"></div>
        <div class="center_prod_box_big">
           <div class="product_img_big"> <?php echo "<a><img src='administrator/images/upload/".$row['memberimg']."' width='169' height='155' alt='' border='0' /></a>"; ?>
            <div class="thumbs">
				<div id='showmsg'><span class="blue">Messages(0)</span></div>
			</div>
			<div class="thumbs">
				<div id='shownotif'><span class="blue">Notifications(0)</span></div>
			</div>
          </div>
          <div class="details_big_box">
            <!--<div class="product_title_big"></div>-->
            <div class="specifications">
				<div class='hidemsg'>
					<div class="thumbs">
						<div class="thumbs">
							From: <span class="blue">Administrator</span><br />
						</div>
						<div class="thumbs">
							Message: <span class="blue"><p align='justify'><br />&nbsp&nbsp&nbsp&nbsp&nbsp Lorem ipsum dolor sit amet.ipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit ametipsum dolor sit amet</p></span><br />
							Last: <span class="blue">September 8, 2011</span>
						</div>
						<div class="thumbs">
							<span class="blue"><p align='right'><a>Reply</a></p></span>
						</div>
					</div>
				</div>
				<div class='hidenotif'>
					<div class="thumbs">
						<div class="thumbs">
							Notifications<br />
						</div>
						<?php
							$get = mysql_query("SELECT * FROM needtopay WHERE needtopay.memberid = '$userid' AND needtopay.status=0")or die(mysql_error());
							$getit = mysql_fetch_array($get);
							$prod = $getit['productid'];
							$getprod = mysql_query("SELECT * FROM products WHERE productid = '$prod'")or die(mysql_error());
							$fetchit = mysql_fetch_array($getprod);
						?>
						<div class="thumbs">
							<span><p align='justify'>Congratulations!!<br />You are the winner of item on bid named <?php echo $fetchit['prodname'];?></p>
							<div class="thumbs">
								Amount: P<?php echo $getit['payment'];?><br />
								<hr />
								(click pay to pay via <img src="images/payment.gif" alt="" /> account)
								<input type='submit' name='pay' value='PAY' /><input type='submit' name='decline' value='DECLINE' />
							</div>
							</span><hr />
							Last: <span class="blue"><?php echo $getit['dateadded'];?></span>
						</div>
						
					</div>
				</div>
            </div>
           	</div>
        </div>
        <div class="bottom_prod_box_big"></div>
      </div>
      <div class="center_title_bar">Similar products</div>
      <div class="prod_box">
        <div class="top_prod_box"></div>
        <div class="center_prod_box">
          <div class="product_img"><a href="details.html"><img src="images/Mail[1].png" width="120" height="90" alt="" border="0" /></a></div>
          <div class="prod_price"><span class="price">Messsages & Notifications</span></div>
        </div>
        <div class="bottom_prod_box"></div>
      </div>
      <div class="prod_box">
        <div class="top_prod_box"></div>
        <div class="center_prod_box">
        <div class="product_img"><a href="watchthis.php" rel='facebox'><img src="images/p5.gif" alt="" border="0" /></a></div>
          <div class="prod_price"><span class="price">Products on Watch</span></div>
        </div>
        <div class="bottom_prod_box"></div>
   	</div>
      <div class="prod_box">
        <div class="top_prod_box"></div>
        <div class="center_prod_box">
          <div class="product_img"><a href="details.html"><img src="images/p5.gif" alt="" border="0" /></a></div>
          <div class="prod_price"><span class="price">Log-Out</span></div>
        </div>
        <div class="bottom_prod_box"></div>
      </div>
	  
    </div>
    <!-- end of center content -->
    <div class="right_content">
	<div class="title_box">Log In</div>
      <div class="border_box">
        <form method = "post" action="" id="logins-form" class="logins-form">
        	<strong>Username</strong><input type="text" name="user">
                <strong>Password</strong><input type="password" name="pass">
                  <ul>
                  	<li><a href="#">Forgot your password?</a></li>
                    <li><a href="#">Forgot your username?</a></li>
                    <li><a href="register.php">Create an account.</a></li>
                  </ul>
        	<input type="submit" value="Login" name="login"><br />
            <ul></ul>
 		</form>
      </div>
      <div class="title_box">What’s new</div>
      <div class="border_box">
        <div class="product_title"><a href="details.html">Motorola 156 MX-VL</a></div>
        <div class="product_img"><a href="details.html"><img src="images/p2.gif" alt="" border="0" /></a></div>
        <div class="prod_price"><span class="reduce">350$</span> <span class="price">270$</span></div>
      </div>
      <div class="title_box">Manufacturers</div>
      <ul class="left_menu">
        <li class="odd"><a href="#">Sony</a></li>
        <li class="even"><a href="#">Samsung</a></li>
        <li class="odd"><a href="#">Daewoo</a></li>
        <li class="even"><a href="#">LG</a></li>
        <li class="odd"><a href="#">Fujitsu Siemens</a></li>
        <li class="even"><a href="#">Motorola</a></li>
        <li class="odd"><a href="#">Phillips</a></li>
        <li class="even"><a href="#">Beko</a></li>
      </ul>
      <div class="banner_adds"> <a href="#"><img src="images/bann1.jpg" alt="" border="0" /></a> </div>
    </div>
    <!-- end of right content -->
  </div>
  <!-- end of main content -->
  <?php foothtml(); ?>
  <script type='text/javascript'>
	jQuery(document).ready( function() {
		jQuery('.hidemsg').hide();
		jQuery('#showmsg').click( function() {
			jQuery('.hidemsg').toggle('fade');	
			jQuery('.hidenotif').hide('fade');
		});
		jQuery('.hidenotif').hide();
		jQuery('#shownotif').click( function() {
			jQuery('.hidenotif').toggle('fade');
			jQuery('.hidemsg').hide('fade');
		});
	});
</script>
