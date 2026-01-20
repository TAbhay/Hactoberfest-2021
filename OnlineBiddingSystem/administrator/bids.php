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
				<div id="menu"> <!-- navigation menu -->
					<ul>
						<li><a href="notifications.php"><img src="icons/73.png" alt /><span>Notifications</span></a></li>
                        <li class = "current"><a href="bids.php" class="dashboard"><img src="icons/2.png" alt /><span class="current">Bids</span></a></li>						
						<li class='showme'><a href="#"><img src="icons/36.png" alt /><span>Products</span></a>
							<ul class='showoff'>
								<li><a href="add_prodven.php">New Product</a></li>
								<li><a href="addcategory.php">New Product Category</a></li>
							</ul>
						</li>						
                        <li class='showme'><a href="#"><img src="./assets/icons/small_icons_3/settings.png" alt /><span>Account</span></a>
							<ul class='showoff'>
								<li><a href="logout.php">Logout</a></li>
							</ul>
						</li>	
					</ul>
				</div> <!-- navigation menu end -->
			</div> <!-- sidebar end -->

			<div id="primary_right">
				<div class="inner">
					
					<h1>Welcome Administrator</h1>


						<div class="two_third column">
                        <h5></h5>
						  <h5>Products on bid</h5>
                           	<div id="bodycon">
                          	
                            <div id="gallery">
                                <ul>
							<?php
								require ("../db.php");
								$query = mysql_query("SELECT * FROM products WHERE status = 0") or die (mysql_error());
								while($row = mysql_fetch_array($query))
								{
								echo "<li>";
								echo "<a href = 'bidlist.php?id=".$row['productid']."' rel='facebox' title='Product Name: ".$row['prodname']." Regular Price: P".$row['regularprice']." Description: ".$row['prodescription']." Click to view log.'><img src ='images/products/".$row['prodimage']."' width='72' height='72' alt='' ></a>";
								echo "</li>";
								}
							?>
                                    </ul>
								</div>
							
                        	</div>
						</div>
<?php
	foothtml();
?>
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