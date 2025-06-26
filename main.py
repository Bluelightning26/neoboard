#Made with assistance from chatGPT :D 

import RPi.GPIO as GPIO
import time
from rpi_ws281x import PixelStrip, Color

# LED
LED_PIN = 6
NUM_LEDS = 64 
BRIGHTNESS = 50 

# RE
ENC_A = 27
ENC_B = 28
ENC_SWITCH = 29

# buzz buzz
PIEZO_PIN = 1

GPIO.setmode(GPIO.BCM)
GPIO.setup(ENC_A, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(ENC_B, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(ENC_SWITCH, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(PIEZO_PIN, GPIO.OUT)


strip = PixelStrip(NUM_LEDS, LED_PIN, brightness=BRIGHTNESS)
strip.begin()


brightness = BRIGHTNESS
display_on = True
last_press_time = 0
press_count = 0
tone_playing = False

def set_brightness(value):
    global brightness
    brightness = max(0, min(255, value))
    strip.setBrightness(brightness)
    strip.show()

def update_display():
    if display_on:
        for i in range(NUM_LEDS):
            strip.setPixelColor(i, Color(brightness, 0, 255 - brightness))
        strip.show()
    else:
        strip.fill(Color(0, 0, 0))
        strip.show()

def play_tone(frequency):
    global tone_playing
    if not tone_playing:
        tone_playing = True
        pwm = GPIO.PWM(PIEZO_PIN, frequency)
        pwm.start(50) 
        return pwm
    return None

def stop_tone(pwm):
    global tone_playing
    if tone_playing:
        pwm.stop()
        GPIO.output(PIEZO_PIN, GPIO.LOW)
        tone_playing = False

def encoder_callback(channel):
    global brightness
    if GPIO.input(ENC_A) == GPIO.HIGH:
        brightness += 5  
    else:
        brightness -= 5 
    set_brightness(brightness)
    update_display()

def switch_callback(channel):
    global last_press_time, press_count
    current_time = time.time()
    
    if current_time - last_press_time < 0.5:
        press_count += 1
    else:
        press_count = 1  

    last_press_time = current_time

    if press_count == 2:
        play_twinkl()

# Chatgpt is a lifesaver for converting this from c to python :salute:
def play_twinkl():
    pwm = None
    for time_value in range(905, 990):
        if time_value == 905:
            pwm = play_tone(130.81)
        elif time_value == 906:
            stop_tone(pwm)
        elif time_value == 907:
            pwm = play_tone(130.81)
        elif time_value == 908:
            stop_tone(pwm)
        elif time_value == 909:
            pwm = play_tone(196)
        elif time_value == 910:
            stop_tone(pwm)
        elif time_value == 911:
            pwm = play_tone(196)
        elif time_value == 912:
            stop_tone(pwm)
        elif time_value == 913:
            pwm = play_tone(220)
        elif time_value == 914:
            stop_tone(pwm)
        elif time_value == 915:
            pwm = play_tone(220)
        elif time_value == 916:
            stop_tone(pwm)
        elif time_value == 917:
            pwm = play_tone(196)
        elif time_value == 918:
            stop_tone(pwm)
        # Add the remaining conditions from your original C code here...
        elif time_value == 919:
            pwm = play_tone(174.61)
        elif time_value == 920:
            stop_tone(pwm)
        elif time_value == 921:
            pwm = play_tone(174.61)
        elif time_value == 922:
            stop_tone(pwm)
        elif time_value == 923:
            pwm = play_tone(164.81)
        elif time_value == 924:
            stop_tone(pwm)
        elif time_value == 925:
            pwm = play_tone(164.81)
	


        elif time_value == 927:
            pwm = play_tone(146.83)
        elif time_value == 928:
            stop_tone(pwm)
        elif time_value == 929:
            pwm = play_tone(146.83)
        elif time_value == 930:
            stop_tone(pwm)
        elif time_value == 931:
            pwm = play_tone(130.81)
        elif time_value == 932:
            stop_tone(pwm)
        elif time_value == 933:
            pwm = play_tone(196)
        elif time_value == 934:
            stop_tone(pwm)
        elif time_value == 935:
            pwm = play_tone(196)
        elif time_value == 936:
            stop_tone(pwm)
        elif time_value == 937:
            pwm = play_tone(174.61)
        elif time_value == 938:
            stop_tone(pwm)
        elif time_value == 939:
            pwm = play_tone(174.61)
        elif time_value == 940:
            stop_tone(pwm)
        elif time_value == 941:
            pwm = play_tone(164.81)
        elif time_value == 942:
            stop_tone(pwm)
        elif time_value == 943:
            pwm = play_tone(164.81)
        elif time_value == 944:
            stop_tone(pwm)
        elif time_value == 945:
            pwm = play_tone(146.83)
        elif time_value == 946:
            stop_tone(pwm)
        elif time_value == 947:
            pwm = play_tone(196)
        elif time_value == 948:
            stop_tone(pwm)
        elif time_value == 949:
            pwm = play_tone(196)
        elif time_value == 950:
            stop_tone(pwm)
        elif time_value == 951:
            pwm = play_tone(174.61)
        elif time_value == 952:
            stop_tone(pwm)
        elif time_value == 953:
            pwm = play_tone(174.61)
        elif time_value == 954:
            stop_tone(pwm)
        elif time_value == 955:
            pwm = play_tone(164.81)
        elif time_value == 956:
            stop_tone(pwm)
        elif time_value == 957:
            pwm = play_tone(164.81)
        elif time_value == 958:
            stop_tone(pwm)
        elif time_value == 959:
            pwm = play_tone(146.83)
        elif time_value == 960:
            stop_tone(pwm)
        elif time_value == 961:
            pwm = play_tone(130.81)
        elif time_value == 962:
            stop_tone(pwm)
        elif time_value == 963:
            pwm = play_tone(130.81)
        elif time_value == 964:
            stop_tone(pwm)
        elif time_value == 965:
            pwm = play_tone(196)
        elif time_value == 966:
            stop_tone(pwm)
        elif time_value == 967:
            pwm = play_tone(196)
        elif time_value == 968:
            stop_tone(pwm)
        elif time_value == 969:
            pwm = play_tone(220)
        elif time_value == 970:
            stop_tone(pwm)
        elif time_value == 971:
            pwm = play_tone(220)
        elif time_value == 972:
            stop_tone(pwm)
        elif time_value == 973:
            pwm = play_tone(196)
        elif time_value == 974:
            stop_tone(pwm)
        elif time_value == 975:
            pwm = play_tone(174.61)
        elif time_value == 976:
            stop_tone(pwm)
        elif time_value == 977:
            pwm = play_tone(174.61)
        elif time_value == 978:
            stop_tone(pwm)
        elif time_value == 979:
            pwm = play_tone(164.81)
        elif time_value == 980:
            stop_tone(pwm)
        elif time_value == 981:
            pwm = play_tone(164.81)
        elif time_value == 982:
            stop_tone(pwm)
        elif time_value == 983:
            pwm = play_tone(146.83)
        elif time_value == 984:
            stop_tone(pwm)
        elif time_value == 985:
            pwm = play_tone(146.83)
        elif time_value == 986:
            stop_tone(pwm)
        # Long last note
        elif 987 <= time_value <= 989:
            pwm = play_tone(130.81)
        elif time_value == 989:
            stop_tone(pwm)

        time.sleep(0.1)  # Adjust the timing as needed

# Setup event detection for rotary encoder and switch
GPIO.add_event_detect(ENC_A, GPIO.BOTH, callback=encoder_callback, bouncetime=200)
GPIO.add_event_detect(ENC_B, GPIO.BOTH, callback=encoder_callback, bouncetime=200)
GPIO.add_event_detect(ENC_SWITCH, GPIO.FALLING, callback=switch_callback, bouncetime=200)

try:
    while True:
        time.sleep(0.1)  # Main loop does nothing, just waits for events
except KeyboardInterrupt:
    GPIO.cleanup()


       
