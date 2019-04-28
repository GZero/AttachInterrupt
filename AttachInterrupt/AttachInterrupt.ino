int led = PB1;  //http://docs.leaflabs.com/docs.leaflabs.com/index.html
int but = PB8;
volatile int bLED = LOW;

void interruptFunction() {bLED = !bLED;}

void setup() {
   pinMode(led, OUTPUT);
   pinMode(but,INPUT_PULLDOWN);
   attachInterrupt(but, interruptFunction, CHANGE);
}

void loop() {
  digitalWrite(led,bLED);
}

