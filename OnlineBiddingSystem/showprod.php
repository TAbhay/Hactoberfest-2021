<?php
	session_start();
	require("functions.php");
	require("htmls.php");
	headhtml();
?>
  <div id="main_content">
    <div id="menu_tab">
      <div class="left_menu_corner"></div>
      <ul class="menu">
        <li><a href="home.php" class="nav2">Home</a></li>
        <li class="divider" ></li>
        <li><a href="prodcateg.php" class="nav1">Products</a></li>
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
    
    <div class="crumb_navigation"> Navigation: <span class="current">Home</span> </div>
   	<div class="left_content">
	<div class="title_box">Categories</div>
      <ul class="left_menu"> 
    <?php
		categories();
		logform(); 
	?>
    </div>
    <!-- end of left content -->
    <div class="center_content">
   		<?php
	  		$id = $_GET['id'];
		?>
      <div class="center_title_bar">Category > 
	  <?php 
	  $catq = mysql_query("SELECT * FROM pcategories WHERE categoryid = $id")or die(mysql_error());
	  $cata = mysql_fetch_array($catq);
	  echo $cata['categoryname'];
	  ?></div>
     	<?php
	  		showprod();
		?>
    </div>
    <!-- end of center content -->
    <!-- end of right content -->
  </div>
  <!-- end of main content -->
<?php foothtml(); ?>
