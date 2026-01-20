<?php
	session_start();
	if($_SESSION['isvalid'] != "true"){
		header("location:index.php");
	}
	require('htmls.php');
	headhtml();
?>
<body>
	<div id="container">
		<div id="bgwrap">
			<div id="primary_left">
        
				<!-- <div id="logo">
				 	<a href="http://hello.amnesio.com/dashboard.html" title="Dashboard"><img src="./assets/logo.png" alt="" /></a>  
w</div> 	 -->
				<!-- logo end -->

				<div id="menu"> <!-- navigation menu -->
					<ul>
						<li><a href="notif.php"><img src="icons/73.png" alt /><span>Notifications</span></a></li>
                        <li><a href="bids.php" class="dashboard"><img src="icons/2.png" alt /><span class="current">Bids</span></a></li>						
						<li class='showme'><a href="#"><img src="icons/36.png" alt /><span>Products</span></a>
							<ul class='showoff'>
								<li><a href="add_prodven.php">New Product</a></li>
								<li><a href="addcategory.php">New Product Category</a></li>
								<li><a href="activprod.php">Active Products</a></li>
								<li><a href="inactivprod.php">Inactive Products</a></li>
							</ul>
						</li>						
                        <li class='showme'><a href="#"><img src="./assets/icons/small_icons_3/settings.png" alt /><span>Account</span></a>
							<ul class='showoff'>
								<li><a href="logout.php">Logout</a></li>
							</ul>
						</li>	
					</ul>
				</div> <!-- sidebar end -->

			<div id="primary_right">
				<div class="inner">
					
					<h1>Welcome Administrator</h1>


						<div class="two_third column">
						  <h5>Add New Product</h5>
                           <div id="bodycon">
                          <form method="post" name="prodform" id="prodform" action="" enctype='multipart/form-data'>
                          		<div id="textcon">
                                	<p>Product Name:</p><br/>
                                 	<p>Starting Bid:</p><br/>
                                    <p>Regular Price:</p><br/>
                                    <p>Category:</p><br/>
                                 	<p>Product Description:</p><br/><br/><br/>
                                    <p>Product Image:</p><br/>
                                </div>&nbsp;
                                <div id="inputcon">
                                <ul><input type="text" name="prodname" class="namewidth"/></ul>
                                <p><input type="text" name="startingbid" class="namewidth"/></p>
                                <p><input type="text" name="regularprice" class="namewidth"/></p>
                                <p><select name="category" class="namewidth"/>
                                        <option> </option>
                                        <option>Abstract/Artistic</option>
                                        <option>Anime/Cartoon</option>
                                        <option>Artist/Celebrities</option>
                                        <option>Colorful</option>
                                        <option>Life/Nature</option>
                                        <option>Statement</option>
                                        <option>Punk</option>
                                        <option>Dark</option>
                                        <option>Graffiti</option>
                                        <option>Sports</option>
                                        <option>Classic/Retro</option>
                                 </select></p>
                                 <p><textarea name="descrpt" class="namewidth" /></textarea></p>
                                 <p><input type="file" name="image" class="namewidth"/></p>
                                 <br/>
                                 <p><input type="submit" name="prodsave" value="Save Product"/></p>
                                 </div>
								</form>

                        </div>
						</div>

						<div class="one_third last column">
						  <h5></h5>
						</div>
						<hr />
						<HR>
						<HR/>
						  <div class="clearboth"></div>
						</div><!-- three_fourth last -->
					</div>
					<div class="clearboth" style="padding-bottom:20px;"></div>
				</div> <!-- inner -->
			</div> <!-- primary_right -->
		</div> <!-- bgwrap -->
	</div> <!-- container -->
</body>
</html>
<script type='text/javascript'>
	jQuery(document).ready( function() {
			jQuery('.notif').hide();
		jQuery('#number').click( function() {
			jQuery('.notif').toggle('slow');
		});
			
			jQuery(".notif").click( function() {
				var id = $(this).attr("id");
				
				jQuery.ajax({
					type: "POST",
					data: ({id: id}),
					url: "bidupdate.php",
					success: function(response) {
					jQuery(".id" + id).hide();
					jQuery("#num_result").fadeIn().html(response);
					}
				});
				
			})
			jQuery(document).ready( function() {
			jQuery('.showoff').hide();
		jQuery('.showme').click( function() {
			jQuery('.showoff').hide();
			jQuery(this).find('ul').toggle('slow');
		});

	});
		
	});
</script>