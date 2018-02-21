<!DOCTYPE html>
<html>
	<head>
		<!--
			Final Project - Job
			Author: Danh Tran
			Date: 12/11/2016
			Fixed-width 3 columns.
		-->
		
		<meta name = "description" content = ", Zanzibars is a funky destination with fresh roasted coffee, espresso drinks, hot and cold teas, grilled and cold sandwiches, and homemade soups. Enjoy some live entertainment in our connected theatre space both day and night"></meta>
		
		<meta name = "keywords" content = "beverage, coffee, wine, food, beer, sandwiches, soup, dessert, music, event, job, daytime, nighttime"></meta>
		
		<title>Job</title>
		
		<script src = "modernizr-2.js"></script>
		
		<link href = "files/generallayout.css" rel = "stylesheet" type = "text/css" media = "screen" />
		<link href = "files/3colfixedlayout.css" rel = "stylesheet" type = "text/css" media = "screen" />
		<link href = "files/printlayout.css" rel = "stylesheet" type = "text/css" media = "print" />
		
		<style type = "text/css">
			fieldset {
				border: solid 1px firebrick;
				padding: 5px;
				margin: 10px 0;
			}
			
			legend {
				padding: 0 10px;
			}

			.floatleft label {
				width: 130px;
				margin: 5px 10px 0 0;
				text-align: right;
				float: left;
			}
			
			.floatleft input {
				margin-top: 6px;
				display: block;
			}
			
			fieldset fieldset {
				margin: 0;
				clear: both;
				border: none;
			}
			
			label {
				margin-right: 10px;
			}
			
			select {
				margin-top: 6px;
				display: block;
			}
			
			fieldset.border {
				margin: 0 0 20px;
				border: solid 1px lavender;
			}
			
			.button {
				padding: 5px 20px;
				background-color: lightyellow;
			}
			
			#main table{
				margin: 0 auto;
			}
		</style>
	</head>
	<body>
		<div id = "container">
			<section id = "top">
			<header>
				<h1>Zanzibar Coffee House</h1>
			</header>
			</section>	<!-- end of top -->
			
			<nav>
				<ul>
					<li><a href = "index.htm" title = "Home Page">Home</a></li>
					<li><a href = "menu.htm" title = "Menu">Menu</a></li>
					<li><a href = "events.htm" title = "Events">Events</a></li>
					<li><a href = "location.htm" title = "Location">Location</a></li>
					<li><a href = "job.htm" title = "Job" style = "background-color: lightblue; color: forestgreen;">Job</a></li>
					<li><a href = "about.htm" title = "About">About</a></li>
				</ul>
			</nav>
			
			<section id = "leftside">
				<h3>Our opening time</h3>
				
				<table>
					<tr><th>Day</th><th>Open</th><th>Close</th></tr>
					<tr><td rowspan = "4">Monday - Thursday</td><td>8:30</td><td>9:30</td></tr>
					<tr><td>8:30</td><td>21:30</td></tr>
					<tr><td>8:30</td><td>21:30</td></tr>
					<tr><td>8:30</td><td>21:30</td></tr>
					<tr><td>Friday</td><td>8:30</td><td>23:00</td></tr>
					<tr><td>Saturday</td><td>8:00</td><td>20:00</td></tr>
					<tr><td>Sunday</td><td colspan = "2">Close</td></tr>
				</table>
			</section>	<!-- end of leftside -->
			
			<section id = "rightside">
				<h3>How People Value Us</h3>
				
				<p class = "comment">...Great conditions and great environment to work...</p>
				<p class = "name">Katherine Nop - student</p>
				
				<p class = "comment">...Friendly both to customers and coworkers...</p>
				<p class = "name">Gavin Song - local resident</p>
				
				<p class = "comment">...Still keep in touch with managers and coworkers. Nice folks...</p>
				<p class = "name">Mark Anderson - out-state resident</p>
			</section>	<!-- end of rightside -->
			
			<section id = "main">
				<h3>Job application</h3>
				
				<h3>Your information accepted:</h3>
				<?php

					echo "<table border='1'>";
					echo "<tr><th>Field Name</th><th>Value of field</th></tr>";
					foreach($_POST as $key => $value)
					{
						echo '<tr>';
						echo '<td>',$key,'</td>';
						echo '<td>',$value,'</td>';
						echo "</tr>";
					} 
					echo "</table>";
					echo "<p>&nbsp;</p>";

				?>
			</section>	<!-- end of main -->
			
			<footer>
				<h2>Follow us</h2>
				<a href = "http://www.facebook.com/zanzibarcoffeehouse/" title = "Our facebook page">
					<img src = "images/facebook-icon.png" width = "50" height = "50" alt = "Facebook" title = "Facebook" />
				</a>
				<a href = "http://www.twitter.com/zanzibarcoffeehouse/" title = "Our Twitter page">
					<img src = "images/twitter-icon.png" width = "50" height = "50" alt = "Twitter" title = "Twitter" />
				</a>
				<p>
					<br />
					<a href = "#top" title = "Top">To the Top</a>
					<br />
					<br />
					<a href="http://jigsaw.w3.org/css-validator/check/referer">
						<img style="border:0;width:88px;height:31px"
							src="http://jigsaw.w3.org/css-validator/images/vcss"
							alt="Valid CSS!" />
					</a>
				</p>
				<h6>This website is an asignment project and for academic purposes only.</h6>
			</footer>
		</div>	<!-- end of container -->
	</body>
</html>