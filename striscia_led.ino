#define RED_LED_PIN 11
#define GREEN_LED_PIN 10
#define BLUE_LED_PIN 9

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {
  for(int i = 0; i < 256; i++){
    rgb(255-i, i, 0);
    delay(10);
  }
  for(int i = 0; i < 256; i++){
    rgb(0, 255-i, i);
    delay(10);
  }
  for(int i = 0; i < 256; i++){
    rgb(i, 0, 255-i);
    delay(10);
  }
}

void rgb(int r, int g, int b){
  analogWrite(RED_LED_PIN, r);
  analogWrite(GREEN_LED_PIN, g);
  analogWrite(BLUE_LED_PIN, b);
}