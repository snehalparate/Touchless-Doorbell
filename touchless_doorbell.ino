// Touchless Doorbell
// Arduino Uno + IR Obstacle Sensor + Buzzer

const int irSensorPin = 2;
const int buzzerPin = 8;

void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(buzzerPin, LOW);

  Serial.begin(9600);
}

void loop() {
  int sensorState = digitalRead(irSensorPin);

  // Most IR obstacle sensors give LOW when an object is detected
  if (sensorState == LOW) {
    Serial.println("Person detected - Doorbell ON");

    digitalWrite(buzzerPin, HIGH);
    delay(1000);

    digitalWrite(buzzerPin, LOW);
    delay(500);
  } 
  else {
    digitalWrite(buzzerPin, LOW);
  }
}
