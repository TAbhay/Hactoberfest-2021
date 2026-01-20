<html>
<head>
<script type="text/javascript" src=" administrator/js/jquery-1.4.2.min.js" ></script>
<script>
var refreshId = setInterval(function()
{
     $('#responsecontainer').load('timekuni.php');
}, 500);
</script>

</head>
<body>

<div id="responsecontainer">

</div>

</body>
</html>