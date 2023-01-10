int ledPin = 13;  // LED on Pin 13 of Arduino
int sensorPin = 7; // Input for HC-S501
int red = 3;//    The 3 pins for the rgb LED.
int green = 5;
int blue = 6;

int sensorValue; // Place to store read PIR Value


void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  digitalWrite(ledPin, LOW);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  
}

void loop() {
  sensorValue = digitalRead(sensorPin);
  digitalWrite(ledPin, sensorValue);
  if(sensorValue == HIGH) {
    analogWrite(red, 255);
    analogWrite(green,255);
    analogWrite(blue, 255);
  } else if (sensorValue == LOW) {
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
  

}
