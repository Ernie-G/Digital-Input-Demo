#define LED 3
#define BUTTON 7

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == HIGH) { //check if button is pressed
    digitalWrite(LED, HIGH); //turn LED on
    delay(500);              //wait 0.5s
    digitalWrite(LED, LOW);  //turn LED off
  } else {
    digitalWrite(LED, LOW);
  }
}
