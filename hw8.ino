/*
AnalogReadSerial
Reads an analog input on pin 0, prints the result to the serial monitor.
Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

This example code is in the public domain.
*/

// the setup routine runs once when you press reset:
void setup() {
// initialize serial communication at 9600 bits per second:
Serial.begin(9600);
  pinMode(7, OUTPUT);
      pinMode(9, OUTPUT);
      pinMode(4, OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() {
// read the input on analog pin 0:
int sensorValue = analogRead(A0);
// print out the value you read:
//Serial.println(sensorValue);
//delay(1);        // delay in between reads for stability

if(sensorValue > 600) {
digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
} else {                     // wait for a second
digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
delay(1000);
}

if(sensorValue > 900) {
digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
} else {                     // wait for a second
digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
delay(1000);
}

if(sensorValue > 300) {
digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
} else {                     // wait for a second
digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
delay(1000);
}
}
