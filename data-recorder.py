import time
import serial

ser = serial.Serial('COM4', 9600)

with open("remote-signals.txt", "w") as file: # xyz.txt is filename, w means write format
	while True:
		value = ser.readline()
		print(value)
		file.write(f"{str(value)}\n")
		#time.sleep(0.5)