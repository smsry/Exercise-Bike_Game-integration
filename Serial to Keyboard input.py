import serial
import keyboard


ser = serial.Serial('COM8', 9600)

while(True):
    sount = ser.readline()
    string_ount = sount.decode()
    string = string_ount.rstrip()
    integ = int(string)    
    print(integ)
    if(integ!=0):
        keyboard.press('w')
        if(integ<4):
            keyboard.press('ctrl')
            keyboard.release('shift')
        elif(integ>=4 and integ<=8):
            keyboard.release('ctrl')
            keyboard.release('shift')
            #time.sleep(0.250)
            #keyboard.release('ctrl')
        else:
            keyboard.release('ctrl')
            keyboard.press('shift')
    else:
        keyboard.release('w')
        keyboard.release('ctrl')
        keyboard.release('shift')
                    

    

ser.close()
