
def servo (servoPIN,angle):
    import RPi.GPIO as GPIO
    import time

    servoPIN = 17
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(servoPIN, GPIO.OUT)
    p = GPIO.PWM(servoPIN, 50) # GPIO 17 for PWM with 50Hz
    p.start(2.5) # Initialization
    dutylength = angle*10/180 + 2.5
    print("the angle is:{}".format(angle))
    p.ChangeDutyCycle(dutylength)
    time.sleep(0.25)

    p.stop()
    GPIO.cleanup()
