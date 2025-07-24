#define LDR_PIN 33
#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue > 3000) {
    digitalWrite(LED_PIN, LOW);  
    Serial.println("LED OFF");
  } else {
    digitalWrite(LED_PIN, HIGH); 
    Serial.println("LED ON");
  }

  delay(500);
}
// wokwi simulation : https://wokwi.com/projects/437277543642576897
