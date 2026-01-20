<?php
	session_start();
	if($_SESSION['isvalid'] != "true"){
		header("location:index.php");
	}
	require('functions.php');
	require('htmls.php');
	headhtml();
	categoryadd();
?>
<body>
	<div id="container">
		<div id="bgwrap">
			<div id="primary_left">
        
				<!-- <div id="logo">
				 	<a href="http://hello.amnesio.com/dashboard.html" title="Dashboard"><img src="./assets/logo.png" alt="" /></a>  
					</div> 	 -->
				<!-- logo end -->

				<div id="menu"> <!-- navigation menu -->
					<ul>
						<li class="current"><a href="notifications.php"><img src="icons/73.png" alt /><span>Notifications</span></a></li>
                        <li><a href="bids.php" class="dashboard"><img src="icons/2.png" alt /><span class="current">Bids</span></a></li>						
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
			<center><h1><br />Welcome Administrator</h1></center>
				<div class="inner">
				<!--join member and products-->
				<?php 
				
				$bidnum = mysql_query("SELECT * FROM bidreport LEFT JOIN member ON member.memberid = bidreport.bidder LEFT JOIN products ON products.productid = bidreport.productid WHERE bidreport.status = 0") or die(mysql_error());
						$count = 0;
						WHILE($stat = mysql_fetch_array($bidnum)){
							$count++;
						}
				?>
				<!--end query-->
				
				<!--query for msgs-->
				<?php 
				$datenow = date('l,F d,Y');
				$endedsum = mysql_query("SELECT * FROM products WHERE duedate < '$datenow' AND status = 0") or die(mysql_error());
					$counters = 0;
					WHILE($stat = mysql_fetch_array($endedsum)){
							$counters++;
				}
				?>
				<!--end query-->
				
					<!--for notifications-->
					<ul><div id="number"><a href="viewnotif.php" rel="facebox"><img src="./icons/26.png" alt = "0" width='74' height='72'/></a><br />Notifications<div id="num_result"><?php echo $count; ?></div></div></ul>
					<!--end for notifications-->
				
					<!--for notifications-->
					<ul><div id="numberee"><a href="viewended.php" rel="facebox"><img src="./icons/77.png" alt = "0" width='74' height='72'/></a><br />Ended<br /> Products<div id="end_result"><?php echo $counters; ?></div></div></ul>
					<!--end for notifications-->
					
					<div id="result_bid">
					
					</div>
                        </div>
						</div>

						<div class="one_third last column">
						  <h5></h5>
						</div>
						
						  <div class="clearboth"></div>
						</div><!-- three_fourth last -->
					</div>
					<div class="clearboth" style="padding-bottom:20px;"></div>
				</div> <!-- inner -->
				<div id="inner2">
					
				</div>
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
			jQuery('.weee').hide();
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
			jQuery('.weee').hide();
		jQuery('#wew').click( function() {
			jQuery('.weee').toggle('slow');
			jQuery('.notif').hide();
		});
			
			jQuery(".weee").click( function() {
				var id = $(this).attr("id");
				
				jQuery.ajax({
					type: "POST",
					data: ({id: id}),
					url: "wew.php",
					success: function(response) {
					jQuery(".id" + id).hide();
					jQuery("#msg_result").fadeIn().html(response);
					}
				});
				
			})
			jQuery('.ended').hide();
		jQuery('#numberee').click( function() {
			jQuery('.ended').toggle('slow');
			jQuery('.notif').hide();
			jQuery('.weee').hide();
		});
			
			jQuery(".ended").click( function() {
				var id = $(this).attr("id");
				
				jQuery.ajax({
					type: "POST",
					data: ({id: id}),
					url: "weweee.php",
					success: function(response) {
					jQuery(".id" + id).hide();
					jQuery("#end_result").fadeIn().html(response);
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