# NeoBoard
## A NeoPixel based PCB Matrix!


![Hackatime Badge](https://hackatime-badge.hackclub.com/U0824G9PTFE/Pixeldust/?color=314cb0&label=Time%20Tracked%20In%20KiCad)*
![Hackatime Badge](https://hackatime-badge.hackclub.com/U0824G9PTFE/neoboard-case/?color=64BB58&label=Time%20Tracked%20In%20OnShape)
![Hackatime Badge](https://hackatime-badge.hackclub.com/U0824G9PTFE/neoboard/?color=red&label=Time%20Journaling)

*Not all time in KiCad and most but not all time in OnShape has been tracked


I made this project as LEDs are fun and Neopixels sit right on the board in a flush, neat way. I wanted a project that can sit on my desk and look cool while being fun and interactive. I started PixelDust but didn't come close to finishing, and figured- why not work on a matrix when waiting for my HackPad (v2) and Solder PCB to ship
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/8377be47c38cc220d4230f117ebddfec74ac3150_screenshot_2025-06-22_at_6.47.11___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/3c2e57406e511e0e373404e9e97b731550a60340_screenshot_2025-06-22_at_6.46.30___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/43462afa9c5e07d12344af6adee831e847c00a7f_screenshot_2025-06-27_at_5.48.47___pm.png)
![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/66dc19e46450c50363e5fd113f93f1276bcabd57_screenshot_2025-06-27_at_5.49.07___pm.png)

**BOM:**
|  Part | #| Cost (Combined) | Supplier  | Link |
|---    |--- |---             |---        | ---  |
|SK6812	| 64 (7 packs of 10) | $34.65 | Digikey | https://www.digikey.com/en/products/detail/adafruit-industries-llc/2659/5804108|
|  EC11E15204A3 | 1  | $4.28 | Digikey |  https://www.digikey.com/en/products/detail/bourns-inc/PEC11R-4215F-S0024/4499665| (https://www.digikey.com/en/products/detail/alps-alpine/EC11E15204A3/21721644)
|XIAO-RP2040-DIP| 1| $4.68| Digikey | https://www.digikey.com/en/products/detail/seeed-technology-co-ltd/102010428/14672129|
| PS1240P02BT| 1 | $0.54|Digikey|https://www.digikey.com/en/products/detail/tdk-corporation/PS1240P02BT/935924
|   C   | 1x ~10uF 10x ~4.7nF | $0.24 + $1.60| Digikey| https://www.digikey.com/en/products/detail/epcos-tdk-electronics/B32529C0102K289/1089737 https://www.digikey.com/en/products/detail/panasonic-electronic-components/ECQ-E4333KF/56549|  
| 330Ohm R | 10 | $0.26 | Digikey | https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT330R/1741399
|  RE Rubber Knob    | 1 | $0.75| Adafruit | https://www.adafruit.com/product/5093 | 
| 0.91 inch OLED |1 | $1.48 | AliExpress | https://www.aliexpress.us/item/3256809074340394.html|
| PCB Lead Free| 1 | $21.66 (inc shipping) | JLCPCB | https://trade.jlcpcb.com/checkout/
| Case | - | - | Printing Legion | - |
| Small Felt Furniture Feet | 4 | N/A | Already Own | - |

Digikey Shipping: $6.99

AliExpress Shipping: $4.90


**TOTAL: $80.45**


How to put it together?
The top and the bottom of the case can be slid together. I'm going to put felt pads underneath it so the top piece extrudes just slightly lower than the button piece. I was thinking of putting an acrylic sheet on the front to help give it a diffused look, but I'd like the PCB to be easily visable to give it a unique look.