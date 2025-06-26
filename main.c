// NOT FIRMWARE USED- This is old firmware for buzzer, and is backup.



// ALL BLACKBOX CODE- WILL FORMAT WITH BUZZER IN HAND
//			#include "blackbox.h"

			// A Simple Musical Drawing Board!
			// By @blu

			/*
			Controls:
			- Arrow keys to move
			- X to switch between drawing and erasing

			After you finish drawing the board will start counting...
			- Every 30 seconds for 10 minutes it will invert your drawing
			- After 10 minutes all pixels will turn on
			- 15 Minutes after Twinkle Twinkle Little Star will start playing
			- After 50 minutes all pixels will turn off,
			the cursor will reappear with any button presses
			- The matrix will go to sleep after an hour of no use
			*/

			#define BLACKBOX_TIMEOUT_1 1000
			#define BLACKBOX_TIMEOUT_2 500
			//#define BLACKBOX_TIMEOUT_3 250

			BlackBox* blackbox;

			int player = 12;
			int draw = 0;
			int time = 0;
			int timeHalfSec; //(time updates once a second)
			int pressCount = 0;


			// These functions are called when the buttons are pressed

			//Up arrow
			void on_up() {
			blackbox.matrix.pixel(player).turn_off();
			if (draw ==1){
			blackbox.matrix.pixel(player).turn_on();
			}
			if (player <= 8)
				{player +=8;}
			player-=8;
			blackbox.matrix.pixel(player).turn_on();
			time = 0;
			}

			//Down arrow
			void on_down() {
			blackbox.matrix.pixel(player).turn_off();
			if (draw ==1){
			blackbox.matrix.pixel(player).turn_on();
			}
			if (player >= 56)
				{player -= 8;}
			player+=8;
			blackbox.matrix.pixel(player).turn_on();
			time = 0;
			}

			//Right arrow
			void on_right() {
			blackbox.matrix.pixel(player).turn_off();
			if (draw ==1){
			blackbox.matrix.pixel(player).turn_on();
			}
			player++;
			blackbox.matrix.pixel(player).turn_on();
			time = 0;
			}

			//Left arrow
			void on_left()
			{
			blackbox.matrix.pixel(player).turn_off();
			if (draw == 1){
			blackbox.matrix.pixel(player).turn_on();
			}
			player--;
			blackbox.matrix.pixel(player).turn_on();
			time = 0;
			}


			//Selection (x)
			void on_select() {
			if (draw == 0)
			{draw = 1;}
			else
				{draw = 0;}

			time = 0;
			}

			// These functions are called repeatedly
			void on_timeout_1() {

			//counts time since last edit (1 second - adjust @ top)
			time++;

			//Cursor blink
			blackbox.matrix.pixel(player).toggle();

			//display altercations
			//invert
			if (time >= 30 && time <= 600 && time % 10 == 0)
				{
				for (int i = 0; i <= 64; i++)
				{
					blackbox.matrix.pixel(i).toggle();
				}
				}

			//All on
			if (time >= 1800 && time <= 1860)
				{
				blackbox.matrix.turn_all_on();
				}

			//Rest
			if (time >=1860)
				{
				blackbox.matrix.turn_all_off();
				}


			//Fun with buzzer
			//No sound w/ no_tone
			blackbox.piezo->no_tone();

			//On Click -> Sound
			//  if (time == 1)
			//    {
			//     switch (pressCount)
			//      {
			//        case 0: blackbox.piezo.tone(1318.51);
			//        break;
			//        case 1: blackbox.piezo.tone(1318.51);
			//        break;
			//        case 2: blackbox.piezo.tone(1318.51);
			//        break;
			//        case 3: blackbox.piezo.tone(659.25);
			//        break;
			//        case 4: blackbox.piezo.tone(1244.51);
			//        break;
			//        }
			//    presscount++;
			//    }


			//Twinkle Twinkle Lil Star!
			//Sections are split up based on natural breaks -> originally tried measures of 4but too complex
			//s1
			if (time == 905)
				{blackbox.piezo.tone(130.81);}
			if (time == 906)
				{blackbox.piezo.no_tone();}
			if (time == 907)
				{blackbox.piezo.tone(130.81);}
			if (time == 908)
				{blackbox.piezo.no_tone();}
			if (time == 909)
				{blackbox.piezo.tone(196);}
			if (time == 910)
				{blackbox.piezo.no_tone();}
			if (time == 911)
				{blackbox.piezo.tone(196);}
			if (time == 912)
				{blackbox.piezo.no_tone();}
			if (time == 913)
				{blackbox.piezo.tone(220);}
			if (time == 914)
				{blackbox.piezo.no_tone();}
			if (time == 915)
				{blackbox.piezo.tone(220);}
			if (time == 916)
				{blackbox.piezo.no_tone();}
			if (time == 917)
				{blackbox.piezo.tone(196);}
			if (time == 918)
				{blackbox.piezo.no_tone();}
			//s2
			if (time == 919)
				{blackbox.piezo.tone(174.61);}
			if (time == 920)
				{blackbox.piezo.no_tone();}
			if (time == 921)
				{blackbox.piezo.tone(174.61);}
			if (time == 922)
				{blackbox.piezo.no_tone();}
			if (time == 923)
				{blackbox.piezo.tone(164.81);}
			if (time == 924)
				{blackbox.piezo.no_tone();}
			if (time == 925)
				{blackbox.piezo.tone(164.81);}
			if (time == 926)
				{blackbox.piezo.no_tone();}
			if (time == 927)
				{blackbox.piezo.tone(146.83);}
			if (time == 928)
				{blackbox.piezo.no_tone();}
			if (time == 929)
				{blackbox.piezo.tone(146.83);}
			if (time == 930)
				{blackbox.piezo.no_tone();}
			if (time == 931)
				{blackbox.piezo.tone(130.81);}
			if (time == 932)
				{blackbox.piezo.no_tone();}
			//s3
			if (time == 933)
				{blackbox.piezo.tone(196);}
			if (time == 934)
				{blackbox.piezo.no_tone();}
			if (time == 935)
				{blackbox.piezo.tone(196);}
			if (time == 936)
				{blackbox.piezo.no_tone();}
			if (time == 937)
				{blackbox.piezo.tone(174.61);}
			if (time == 938)
				{blackbox.piezo.no_tone();}
			if (time == 939)
				{blackbox.piezo.tone(174.61);}
			if (time == 940)
				{blackbox.piezo.no_tone();}
			if (time == 941)
				{blackbox.piezo.tone(164.81);}
			if (time == 942)
				{blackbox.piezo.no_tone();}
			if (time == 943)
				{blackbox.piezo.tone(164.81);}
			if (time == 944)
				{blackbox.piezo.no_tone();}
			if (time == 945)
				{blackbox.piezo.tone(146.83);}
			if (time == 946)
				{blackbox.piezo.no_tone();}
			//s4
			if (time == 947)
				{blackbox.piezo.tone(196);}
			if (time == 948)
				{blackbox.piezo.no_tone();}
			if (time == 949)
				{blackbox.piezo.tone(196);}
			if (time == 950)
				{blackbox.piezo.no_tone();}
			if (time == 951)
				{blackbox.piezo.tone(174.61);}
			if (time == 952)
				{blackbox.piezo.no_tone();}
			if (time == 953)
				{blackbox.piezo.tone(174.61);}
			if (time == 954)
				{blackbox.piezo.no_tone();}
			if (time == 955)
				{blackbox.piezo.tone(164.81);}
			if (time == 956)
				{blackbox.piezo.no_tone();}
			if (time == 957)
				{blackbox.piezo.tone(164.81);}
			if (time == 958)
				{blackbox.piezo.no_tone();}
			if (time == 959)
				{blackbox.piezo.tone(146.83);}
			if (time == 960)
				{blackbox.piezo.no_tone();}
			//s5
			if (time == 961)
				{blackbox.piezo.tone(130.81);}
			if (time == 962)
				{blackbox.piezo.no_tone();}
			if (time == 963)
				{blackbox.piezo.tone(130.81);}
			if (time == 964)
				{blackbox.piezo.no_tone();}
			if (time == 965)
				{blackbox.piezo.tone(196);}
			if (time == 966)
				{blackbox.piezo.no_tone();}
			if (time == 967)
				{blackbox.piezo.tone(196);}
			if (time == 968)
				{blackbox.piezo.no_tone();}
			if (time == 969)
				{blackbox.piezo.tone(220);}
			if (time == 970)
				{blackbox.piezo.no_tone();}
			if (time == 971)
				{blackbox.piezo.tone(220);}
			if (time == 972)
				{blackbox.piezo.no_tone();}
			if (time == 973)
				{blackbox.piezo.tone(196);}
			if (time == 974)
				{blackbox.piezo.no_tone();}
			//s6
			if (time == 975)
				{blackbox.piezo.tone(174.61);}
			if (time == 976)
				{blackbox.piezo.no_tone();}
			if (time == 977)
				{blackbox.piezo.tone(174.61);}
			if (time == 978)
				{blackbox.piezo.no_tone();}
			if (time == 979)
				{blackbox.piezo.tone(164.81);}
			if (time == 980)
				{blackbox.piezo.no_tone();}
			if (time == 981)
				{blackbox.piezo.tone(164.81);}
			if (time == 982)
				{blackbox.piezo.no_tone();}
			if (time == 983)
				{blackbox.piezo.tone(146.83);}
			if (time == 984)
				{blackbox.piezo.no_tone();}
			if (time == 985)
				{blackbox.piezo.tone(146.83);}
			if (time == 986)
				{blackbox.piezo.no_tone();}
			//long last note
			if (time >= 987 && time <= 989)
				{blackbox.piezo.tone(130.81);}
			if (time == 989)
				{blackbox.piezo.no_tone();}




			if (time >= 3600)
				{sleep();
				}

			}




			void on_timeout_2() {
			timeHalfSec++;

			if (time == 1)
			{
				timeHalfSec = 2;
			}

			}



			//void on_timeout_3() {}


			void main()
			{


			while (1) {
				//Must Keep!
			}
			}


			//Note Frequencies for song from: https://muted.io/note-frequencies/
			//It made converting notes -> Hz a lot easier!



