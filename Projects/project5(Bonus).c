const int led = 2;
const int pot = 34;
const int ldr = 33;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int ldrvalue = analogRead(ldr);
  int threshold = analogRead(pot);

  int bright = 0;
  if (ldrvalue < threshold) {
    int x = threshold - ldrvalue;
    bright = map(x, 0, 4095, 0, 255);
    constrain(bright, 0, 255);
  } else {
    bright = 0;
  }

  analogWrite(led, bright);
}
// wokwi simulation : https://wokwi.com/projects/437363471171566593
