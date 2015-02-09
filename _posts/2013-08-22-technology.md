---
layout: basic-post
categories: tech
author: Mario Russo
title: Technology
img-path: /assets/images/xmas-tree-track.jpg
permalink: /tech/
---

<div class="row">
	<div class="full column">
		<p>Here at the SSBLA we take our racing seriously. We. Go. Fast.</p>
		<p>We've been continually refining our event technology since the 2010 Inaugural Mario Cup. What began with a stop watch has developed into an electronic timing system complete with drag-racing inspired start lights.</p>
		<p>We encourage all racers to follow our development progress <a href="https://github.com/dotMR/LugeRacerTimer/issues">here</a>.
		</p>
	</div>
</div>

<!-- more -->

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Prototype</h2>
		</div>
		<p>The initial concept for our system.</p>
		<img src='/assets/images/timer-unboxed.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Version 1</h2>
		</div>
		<p>First attempt at packaging and testing. Single button start/stop, packaged in a plastic food container to keep out the snow, and because it's what we had on hand.</p>
		<img src='/assets/images/timer-v1.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Version 2</h2>
		</div>
		<p>Now we're getting somewhere. This version added slightly more ruggedized packaging for start and finish line devices, and introduced a menu system that used a potentiometer and push button next to the LCD. V2 also introduced the drag-strip style "Christmas tree" start lights. Wireless data transmission between boxes was handled via xBee radio (with quite mixed results in the cold weather).</p>
		<img src='/assets/images/timer-v2-all.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Version 3</h2>
		</div>
		<p>This implementation moved the entire system into an ammunition dry box for safe keeping. No separate controller at the finish line anymore - everything is handled in the main box. In v3 we added an additional trap sensor to capture racer speed through the finish line. Speaker wire terminals replaced the fragile DIN connectors of the past version. To handle changes in ambient light (and allow night racing!), we added potentiomters to calibrate the finish line photo sensors. This was a _huge_ improvement over past versions.</p>
		<img src='/assets/images/timer-v3-detail.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Current Version</h2>
		</div>
		<p>The current version looks quite similar to v3, although unfortunately the LCD (as well as one red light on the starting light "Christmas tree") died in transit. We've replaced the display with a much more cold-weather-friendly LED segment display. Not as fancy, but it works reliably in the cold.</p>
		<img src='/assets/images/2014-timer-face.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Upcoming Versions</h2>
		</div>
		<p>We're currently reconfiguring the timer with an eye toward durability. We've reached a point in development where the system functions reliably, and it is easy enough to use that we (the makers) no longer need to run it. We can focus on race activities and let other people run the system. Woo woo!</p>

		Improvements for the next version:
		<ul>
			<li>Replace speaker-wire terminals with more solid connections</li>
			<li>Laser-cut new top to fit updated components</li>
			<li>Wire up dual voltage meters for calibrating both finish line sensors simulatenously</li>
			<li>Expose the race data in some manner for external consumption</li>
			<li>Revisit wireless transmission???</li>
		</ul>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Data Transmission</h2>
		</div>
		<p>While we started down the path of wireless transmission, it was a bowl of hurt. We encountered pretty severe packet loss in the extreme cold (not to mention the cold-related battery issues on the remote station, even with heat packs on the batteries), so for now we've resorted back to the hardwiring. A 500' spool of telephone cable allows us to make the track as long as we want, and telephone wire has proven resilient to being stomped on by snowshoes while below 0F.</p>
		<img src='/assets/images/sensor-wires.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Finish Line Sensors</h2>
		</div>
		<p>The finish line is the business end of the track. We've played around with a number of different sensors, but in the end a simple CdS photoresistor works great. The packaging is not elegant, but we've destroyed a few sensors in testing, and these are cheap and easy to fabricate, so we keep a couple on hand ready to go. Pictured below is an earlier version buried in the track. With the addition of a young racer to the family, we've migrated the sensor housings to glass baby food jars, which are far more durable than the previous plastic iterations.</p>
		<img src='/assets/images/sensor-detail.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Night Racing</h2>
		</div>
		<p>If we're racing after dusk we illuminate the track. This gives us a good contrast to make it easy for the photoresistors to pick up racers, and also lets us take well-lit finish line pictures using a separate motion-detect camera (think roller-coaster photos at an amusement park).</p>
		<img src='/assets/images/sensor-install.jpg'/>
	</div>
</div>

<div class="row">
	<div class="two-thirds column">
		<div class="underline-heading">
			<h2>Footage</h2>
		</div>
		<p>There is only one way to feel the rush of backyard luge racing, and that is actually showing up and braving the cold. But for those that can't make the trip, we do our best to provide the best second-hand experience possible.</p>
		<p>We've tried several different methods of event photography so far, but we're excited to be developing our own overheard line-camera system for use in future SSBLA events.</p>

		<a href="/2014-highlight-reel">Here's a preview</a> of the footage we captured in 2014 using our prototype.
	</div>
</div>
