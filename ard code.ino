int count=0;
unsigned long startTime;
unsigned int seconds = 0;
int sensorVal=0;
int oldValue=0;
unsigned long analogValue;

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);                    ////USE PIN 2 WHEN RUNNINGGGG
  startTime = millis(); 
}

void loop() {

    oldValue = sensorVal;
    sensorVal = digitalRead(2);


    if(sensorVal == 1 && oldValue == 0)
    {
      count=count+1;
    }
    if ( millis() - startTime >= 450 )
    {
      // increment seconds
      seconds++;

      // show average
      //Serial.print("Avg:  "); Serial.println((float)count / seconds);
      //Serial.print("Sensor= "); Serial.println(sensorVal);
      //Serial.print("Count= "); 
      Serial.println(count);
      count=0;
      // reset start time
      startTime = millis();
    }


}




