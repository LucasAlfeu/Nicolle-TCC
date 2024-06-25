#include <LiquidCrystal.h>
#define pGas A0
#define pLed 7
#define pBuzzer 6

int seconds = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(pLed, OUTPUT);
  pinMode(pBuzzer, OUTPUT);

  lcd.begin(16, 2); // Set up the number of columns and rows on the LCD.
}

void loop() {
  int sinalGas = analogRead(pGas);
  sinalGas = map(sinalGas,300,750,0,100);

  if (sinalGas > 20){
    digitalWrite(pLed, HIGH);
    digitalWrite(pBuzzer, HIGH);

    // Ligar tela lcd
    lcd.setCursor(0,0);
    lcd.print("Alerta");
    lcd.setCursor(0,1);
    lcd.print("Gas: ");
    lcd.print(sinalGas);
    limpa_tela();

  } else {
    digitalWrite(pLed, LOW);
    digitalWrite(pBuzzer, LOW);
    lcd.setCursor(0,0);
    lcd.print("              ");
  }
  delay(1500);
}

void limpa_tela(){
  delay(1500);
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(0,1);
}
