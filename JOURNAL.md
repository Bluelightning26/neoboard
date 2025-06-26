---
title: "Neoboard"
author: "Dhyan"
description: "A NeoPixel based PCB Matrix"
created_at: "2025-06-17"
total_time_spent: "14.5"
---
---
### June 17th 2025
Hours: 4.5

After finishing Solder I wanted to continue work on my glider but realized I need to work my way up. LEDs are fun, but I want a product that will stay in my room and be fun. When scrolling through Adafruit's site for inspiration and that reminded me of [PixelDust](https://pixeldust.hackclub.com/)! Like normal, I had procrastinated on PixelDust until the night of the deadline. I tried to rush something together, but realized that I'm never going to use a product that wasn't polished and left the PCB as it was.

Here's the old Schematic:

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/7a27f228090035a101bf22f974c2c75d6ee12201_screenshot_2025-04-12_at_8.00.27___pm.png)
If you notice there are a few mistakes in this simple unfinished schematic.

- piezo buzzer, used in Blackbox but again- never submitted due to procrastinaiton
- decoupling capacitors
- more! (lol)


I wanted to create something fun with this and thus added a lot more pixels to make it an 8x8 display

Best parts of the day:
- Finally understand kicad importing footprints and fixed faults in my file library all the way from Hackpad back in Feburary
- 3d file import! I remember when I was scared HackPad wouldn't work because nothing rendered in the 3d models
- Understand how to use parts not in KiCad library now


---
### June 20th 2025
Hours: 5 

- OLED
  - wanted the one from Hackpad, because I didn't use that back in Feb as it was very intimidating
    - was very diffucult to find footprints and 3d model- eventually scavenged the Slack archives and a post from @Tongyu saved the day!
- I imported more 3d models today aswell, including the one for the OLED which took a while to find! I am really happy that now I can find any part I want and import it into KiCad with ease.
- Wired it up
  - very satisfying but took FOREVER, even after i found a groove
  - ended up moving some pins around on GPIO mid-wire as would work better
- ALSO some led numbers were mixed up and thankfully KiCad let me rename the numbers in schema and fix instead of rewiring everything again
- pcbart, orph yipiee didn't work :(
  - if anyone is reading this and can help me get the orpheus yipiee png onto my schematic in a normal not massive size I will be very greatful 
- neither did my pfp logo when solid white or black :(
- rounded corners

End of day:
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/1fe0c4a785a09df43f04a6be09a89a9d1676393c_screenshot_2025-06-20_at_11.34.10___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/42bc096217d4488e6fb306e1910126575baf6381_screenshot_2025-06-20_at_11.34.38___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/080baae1330bb38a7b62dab9a13cb028a4d15a2b_screenshot_2025-06-20_at_11.35.09___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/822592f4ee731e5ed3bc3873c677887553200089_screenshot_2025-06-20_at_11.35.38___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/4215abe72702206c11107af0e1f25a3fde3dce88_screenshot_2025-06-20_at_11.35.52___pm.png)

---
# June 21st
Hours: 2.5
- CAD Day!! In OnShape
- Want an exposed PCB look while looking like a finished product, as you never get too see PCBs and it'll look cool. 
- 

End of day:
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/8377be47c38cc220d4230f117ebddfec74ac3150_screenshot_2025-06-22_at_6.47.11___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/3c2e57406e511e0e373404e9e97b731550a60340_screenshot_2025-06-22_at_6.46.30___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/49ab6dba3d9518cfec00026b15b3d6b9658c8ea2_screenshot_2025-06-22_at_6.47.40___pm.png)

---
# June 22nd
Hours: 0.25
- Time to wrap things up!! 
- I found the kneaded knob this morning when going through the HackPad repository and thought that would be such a cool touch and added it to the design to see how it would flow, I'm still tempted to get https://www.adafruit.com/product/5093 or maybe even https://www.adafruit.com/product/5527 for the knob instead for a more premium feel. In the end the knob is primarily for brightness control though so it will be the part the user interacts with.
- ![Knurled Knob](https://hc-cdn.hel1.your-objectstorage.com/s/v3/6643217170ea88b780892a0ef61c12ab88fe53cb_screenshot_2025-06-22_at_8.03.18___pm.png)


---
# June 26th
Hours: 2.25
- Okay I'm wrapping this up today frfr, on the 22nd I decided to wait on my solder pcb or Hackpad to come in once again to get an understanding on how the pcbs will work in the real world but saw that the PCB shipping time is roughly 3 weeks which is wayy to long to wait for unfortunately.
- I'll make the rough firmware today and will adjust accordingly and fine tune once I have the hard product in my hand
- I also will export the gerber files to this repo and make the BOM
- The BOM took me a while, as I couldn't find the links to many of the products
- I also learned what PCBA is today and am very excited to try it out!!! Edit: Turns out PCBA is not the move, I'd rather solder everything than figure out all the JLC parts
- I THINK I"M READY TO SUBMIT!! Firmware will need some work with product in hand but eerything feels like the product I'd like to have now :)