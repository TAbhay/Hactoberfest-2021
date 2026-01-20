<!DOCTYPE html> 
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" /> 
	
	<title>Bidding Zone - Administrator</title>
	
	<link type="text/css" href="./style.css" rel="stylesheet" /> 
<meta charset="UTF-8"></head>

<body>

	<div id="container">
		<div id="bgwrap">
			<div id="primary_left">
				<div id="menu">
				</div>
			</div>
			<div id="primary_right">
				<div class="inners">
					
					<h1>LOGIN ADMINISTRATOR</h1>
						<form method="post" action="">

						<div class="two_third column">
                          <h5><br/>Username:</h5>
                              	<input type="text" name="aduser">
                          <h5><br/>Password:</h5>
                              	<input type="password" name="adpass">
                         <h5></h5>
                         		<input type="submit" value="LOGIN" name="login">

						</form>
<?PHP 
	$conn = mysql_connect('localhost', 'root', '');
	 if (!$conn)
    {
	 die('Could not connect: ' . mysql_error());
	}
	mysql_select_db("biddingsystemdb", $conn);
	if(isset($_POST['login'])){
		if(isset($_POST['aduser'])) {
			if(isset($_POST['adpass'])){
				$username = $_POST['aduser'];	
				$pass = $_POST['adpass'];
				$result = mysql_query("SELECT * FROM admin WHERE username = '$username' AND  password = '$pass'") or die (mysql_error());
				if (!$result) 
				{
					die("Query to show fields from table failed");
				}
						
				$numberOfRows = MYSQL_NUMROWS($result);				
				if ($numberOfRows == 0)
				{
					echo " <font color= 'red'>Invalid username and password!</font>";
				} 
				 else if ($numberOfRows > 0)
				{
					session_start();
					$_SESSION['user'] = $user_name;
					$_SESSION['isvalid'] = "true";
					$ip_add = $_SERVER['REMOTE_ADDR'];
					$browser = $_SERVER['HTTP_USER_AGENT'];
					$query_login_info = mysql_query("INSERT INTO adloginfo (ip,browser,date) VALUES ('$ip_add','$browser',NOW())") or die (mysql_error());
					header("location:../administrator/notifications.php");
				}
			}
		}
		else{
			echo "please check your password";
			/* 	header("location: errorlogin.php"); */
		}
	}else{
		//echo "please check your username";
		/* 	header("location: errorlogin.php"); */
	}
?>

						</div>
						<div class="one_third last column">
<!--						  <h5>Maecenas ornare tortor</h5>
							  <p>Lorem ipsum dolor sit amet. Quisque aliquam. Donec faucibus. Donec
							  sed tellus eget sapien fringilla nonummy. Mauris a ante. Suspendisse
							  quam sem, consequat at, commodo vitae, feugiat in, nunc.</p>
-->						</div>
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