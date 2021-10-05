<?php
	require("functions.php");
	require("htmls.php");
	session_start();
	if (isset($_POST['next1'])){
		$_SESSION['firstname']=$_POST['lname'];
		$_SESSION['lastname']=$_POST['fname'];
		$_SESSION['gender']=$_POST['gender'];
		$_SESSION['caddress']=$_POST['city'];
		$_SESSION['address']=$_POST['address'];
		$_SESSION['contactno']=$_POST['contactno'];
		$_SESSION['day']=$_POST['day'];
		$_SESSION['month']=$_POST['month'];
		$_SESSION['year']=$_POST['year'];
	}
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
        <li><a href="contact.php" class="nav2">About Us</a></li>
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
    <div class="crumb_navigation"> Navigation: <a href="signin.php">Sign Up</a> &lt; <span class="current">Register Step 1</span> </div>
    <div class="left_content">
      <div class="title_box">Categories</div>
      <ul class="left_menu">
      	<?php
        	categories();
		?>
      <div class="title_box">Announcements</div>
      <div class="border_box">
        <input type="text" name="newsletter" class="newsletter_input" value="your email"/>
        <a href="http://all-free-download.com/free-website-templates/" class="join">join</a> </div>
      <div class="banner_adds"> <a href="http://all-free-download.com/free-website-templates/"><img src="images/bann2.jpg" alt="" border="0" /></a> </div>
    </div>
    <!-- end of left content -->
    <div class="center_content">
      <div class="center_title_bar">Register > Second Step</div>
      <div class="prod_box_big">
        <div class="top_prod_box_big"></div>
        <div class="center_prod_box_big">
          <div class="contact_form">
            <div class="form_row1">
              <label class="contacts">
              	
             	</br></br>
              	</br></br>
                </br></br></br></br></br>
                </br></br>
                
              </label>
            </div>
            <div id="form_row1">
            <form action="login.php" method="post" name="contacts-form" id="contacts-form">
            	<strong>Email:</strong>
              	<input type="text" name="email1" id="email1" class="required email"/></br></br>
              	<strong>Desired Username:</strong>
              	<input type="text" name="loginid" id = "loginid" class="required"/></br></br>
              	<strong>Desired Password:</strong>
              	<input type="password" name="pass1" id="pass1" class="required" onKeyUp="checkPass(); return false;"/></br></br>
              	<strong>Confirm Password:</strong>
            	<input type="password" name="pass2" id="pass2"onkeyup="checkPass(); return false;"/><span id="confirmMessage" class="confirmMessage"></span></br></br>
                <strong>Security Question:</strong>
                <select name="secques">
                	<option>Pick a Security Question</option>
                	<option>Am I Gorgeous?</option>
                	<option>I'm Awesome, Am I?</option>
                	<option>Name of my Pet?</option>
               	</select></br></br>
            	<strong>Secret Answer:</strong>
            <input type="text" name="secans" value="Your Secret Answer:" onFocus="if(this.value=='Your Secret Answer:') this.value='';" onBlur="if(this.value=='') this.value='Your Secret Answer:';" class="required"/></br></br></br></br>
            
            <input type="submit" name="next2" value="Proceed"/>
            </form>
            </div>
            
          </div>
        </div>
        <div class="bottom_prod_box_big"></div>
      </div>
    </div>
    <!-- end of center content -->
    <!-- end of right content -->
  </div>
  <!-- end of main content -->
<?php foothtml(); ?>
