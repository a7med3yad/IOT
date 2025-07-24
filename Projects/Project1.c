#define potPin 35      
#define ledPin 5     

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);  
  Serial.println(potValue);           

  if (potValue < 2000) {  
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);   
  }

  delay(100);
}
// wokwi simulation : https://wokwi.com/projects/437347958501630977
