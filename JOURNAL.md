---
title: "Neoboard"
author: "Dhyan"
description: "A NeoPixel based PCB Matrix"
created_at: "2025-06-17"
total_time_spent: "17"
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

---
# June 27th
Hours: 2.5

- TL;DR Many CAD improvements
- USB C port redone
  - Is symmetrical now and the fillet has a fillet which creates a cool countour curve
  - There is still a gap around it as cables tend to be a bit larger than the port and I would rather have the spacing be too large than be too small
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/cd85ba5f4c1642daaa089ee4c108e0ac403fba05_screenshot_2025-06-27_at_8.17.24___pm.png)
- One thing I realized I hadn't designed before was, How will the PCB sit? It can't sit flush with the bottom of the case due to a resistor on the bottom. Thus before when designing this the PCB was floating. I added these circular supports below where there are no components for the PCB to rest on. These are unobtrusive, and should be strong but I added quite a few as it is better to have too much than too few.
  - I made sure that there were no through hole components that might slightly interfere when placing these cylinders
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/22f77c6b2cea30b0d31bbfd7e1d727eef1f75f25_screenshot_2025-06-27_at_6.08.12___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/9462b65f71e57a4792bfaafc4d1a291a15a10956_screenshot_2025-06-27_at_6.07.59___pm.png)


- Next, the case previously had an inner square and an outer one, with a gap of air in the middle. This was to have the PCB fit nice and snug inside the inner square and while saving on fillament where possible. 
- Here's the previous design (ignore the corner squares, those are new)
  ![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/3434864a90def2748fc1c01d57701d967278d794_screenshot_2025-06-27_at_8.23.52___pm.png)
  After:![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/bcb91c2b59982ab41bdb1f009082172b3986f6a6_screenshot_2025-06-27_at_8.27.13___pm.png)
  - This was done to implement the screw holes. There has to be something solid to screw into; I was playing around with having them on the front and then realized that they wouldn't look very clean and I probably wouldn't use them too often anyways. 
  

- In the old design the lightblue and grey pieces would be the same and make up the bottom with the dark blue on the top. I decided to change that and make the lightblue part the independent part as it is much easier to hide the connection on the back if glue isn't used. This will also give me the option to add the acrylic diffuser in the front if I choose to do so in the future
  ![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/52ebd806f04d983a1229bfeaa6c257c35e44b280_screenshot_2025-06-27_at_8.28.39___pm.png)

- I've used screws before and decided to try something else. The PCB doesn't have any holes in it to screw into and will be snug inplace due to the size of the surrounding case anyways so the only parts we need to connect together are the top and bottom of the case.
  - I went with this design with the top case extruding slightly (0.1 cm iirc below the bottom case). This is so it almost stays steady and the pieces don't move around. I plan on adding felt furniture feet below it
  ![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/dee9ffd027dd3d3da2a800578c68194516e4cf1a_screenshot_2025-06-27_at_8.33.02___pm.png)

  That should be it!!