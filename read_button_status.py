import serial
from pynput.mouse import Button, Controller

port = serial.Serial(port="COM7", baudrate = 9600, timeout = 1)
mouse = Controller()
while True:

    if(port.in_waiting > 0):

        out = port.readline()

        out = out.decode("Ascii")

        if int(out) == 1:

            mouse.press(Button.left)
            print("hold")

        else:

            mouse.release(Button.left)
            print("release")

        