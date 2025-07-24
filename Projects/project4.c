#define led 32        
#define button 27      
#define ldrPin 2      
#define potPin 35     
#define purpleLed 4    
#define yellowLed 5  

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

  pinMode(purpleLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);

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


  int light = analogRead(ldrPin);
  Serial.print("LDR Value: ");
  Serial.println(light);

 
  if (light < 1000) {
    digitalWrite(purpleLed, HIGH);
  } else {
    digitalWrite(purpleLed, LOW);
  }


  int potValue = analogRead(potPin);
  Serial.print("Potentiometer: ");
  Serial.println(potValue);


  if (potValue > 2000) {
    digitalWrite(yellowLed, HIGH);
  } else {
    digitalWrite(yellowLed, LOW);
  }

  delay(100); 
}
// wokwi simulation : https://wokwi.com/projects/437347359020107777
