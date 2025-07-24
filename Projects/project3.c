#define led 32
#define button 27

void setup() {
  pinMode(led, OUTPUT);       
  pinMode(button, INPUT);     
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  } else {
    digitalWrite(led, LOW);
  }
}
//wokwi simulation : https://wokwi.com/projects/437343847352981505
