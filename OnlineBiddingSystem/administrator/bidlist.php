<?php

session_start();
	if($_SESSION['isvalid'] != "true"){
		header("location:index.php");
	}
require ("../db.php");

?>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" /> 
	<script language="JavaScript" type="text/javascript" src="jTPS/jquery.js"></script>
    <script language="JavaScript" type="text/javascript" src="jTPS/jTPS.js"></script>
	<link rel="stylesheet" type="text/css" href="jTPS/jTPS.css">

        <script>
	$(document).ready(function () {
	$('#demoTable').jTPS( {perPages:[5,12,15,50,'ALL'],scrollStep:1,scrollDelay:30,clickCallback:function () {    
	// target table selector
    var table = '#demoTable';
	// store pagination + sort in cookie
	document.cookie = 'jTPS=sortasc:' + $(table + ' .sortableHeader').index($(table + ' .sortAsc')) + ',' + 'sortdesc:' + $(table + ' .sortableHeader').index($(table + ' .sortDesc')) + ',' +'page:' + $(table + ' .pageSelector').index($(table + ' .hilightPageSelector')) + ';';
	}
    });
	// reinstate sort and pagination if cookie exists
	var cookies = document.cookie.split(';');
	for (var ci = 0, cie = cookies.length; ci < cie; ci++) {
		var cookie = cookies[ci].split('=');
		if (cookie[0] == 'jTPS') {
			var commands = cookie[1].split(',');
			for (var cm = 0, cme = commands.length; cm < cme; cm++) {
				var command = commands[cm].split(':');
				if (command[0] == 'sortasc' && parseInt(command[1]) >= 0) {
					} else if (command[0] == 'sortdesc' && parseInt(command[1]) >= 0) {
						$('#demoTable .sortableHeader:eq(' + parseInt(command[1]) + ')').click().click();
						} else if (command[0] == 'page' && parseInt(command[1]) >= 0) {
							$('#demoTable .pageSelector:eq(' + parseInt(command[1]) + ')').click();
						}
					}
				}
			}
			// bind mouseover for each tbody row and change cell (td) hover style
			$('#demoTable tbody tr:not(.stubCell)').bind('mouseover mouseout',
			function (e) {
			// hilight the row
			e.type == 'mouseover' ? $(this).children('td').addClass('hilightRow') : $(this).children('td').removeClass('hilightRow');
                                }
                        );

                });


        </script>
        <style>
                body {
                        font-family: Tahoma;
                        font-size: 9pt;
                }
                #demoTable thead th {
                        white-space: nowrap;
                        overflow-x:hidden;
                        padding: 3px;
                }
                #demoTable tbody td {
                        padding: 3px;
                }
        </style>

<meta charset="UTF-8"></head>

<body>
	<div id="container">
					<center><h1>Welcome Administrator</h1></center>
					<?php 
					$id = $_GET['id'];
					?>

						  <center><h5><?php echo "$id"; ?> Bidding Log</h5></center>
                           <div id="bodycon">
                          <table id="demoTable" style="border: 1px solid #ccc;" cellspacing="0" width="700">
        <thead>
                <?php echo '<tr>';
                        echo '<th sort="index">Bidder</th>';
                        echo '<th sort="date">Date of Bid Placed</th>';
                        echo '<th sort="description">Amount</th>';
                        
                echo'</tr>'; ?>
        </thead>
        <tbody>
        	<?php 
				$prodid = $_GET['id'];
				$query = mysql_query("SELECT * FROM bidreport LEFT JOIN member ON member.memberid = bidreport.bidder LEFT JOIN products ON products.productid = bidreport.productid WHERE products.productid = '$prodid'") or die(mysql_error());
				while ($prod = mysql_fetch_array($query)){
					echo 
					"<tr>
                        <td align='center'>".$prod['lastname'].", ".$prod['firstname']."</td>
                        <td>".$prod['biddatetime']."</td>
                        <td>P".$prod['bidamount']."</td>
					</tr>";
				}
			?>

        </tbody>
        <tfoot class="nav">
                <tr>
                        <td colspan=7>
                                <div class="pagination"></div>
                                <div class="paginationTitle">Page</div>
                                <div class="selectPerPage"></div>
                                <div class="status"></div>
                        </td>
                </tr>
        </tfoot>
</table>

		
	</div> <!-- container -->
</body>
</html>