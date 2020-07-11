#include <Keypad.h>

const byte ROWS = 4;  
const byte COLS = 4;  
char keys[ROWS][COLS] = {
{'D','#','0','*'},
{'C','9','8','7'},
{'B','6','5','4'},
{'A','3','2','1'}
};

byte rowPins[ROWS] = { 10, 11, 12, 13 };    

byte colPins[COLS] = { 6, 7, 8 ,9};    


Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );          

void setup()
{  
  Serial.begin(9600);
}

void loop()
{
  char key = kpd.getKey();
  if(key)
  {
    Serial.print(key);
    Serial.print(".");    
  }
}
