#define pGas A0
#define pLed 7
#define pBuzzer 6

void setup() {
  // put your setup code here, to run once:
  pinMode(pLed, OUTPUT);
  pinMode(pBuzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sinalGas = analogRead(pGas);
  if (sinalGas >= 300){
    digitalWrite(pLed, HIGH);
    difitalWrite(pBuzzer, HIGH)
  } else {
    digitalWrite(pLed, LOW);
    digitalWrite(pBuzzer, LOW);
  }

}
