#include <Keypad.h>
#include <Password.h>
#include<Servo.h>
Servo myservo;
String newPasswordString; 
char newPassword[6]; 
Password password = Password( "1234" );
byte maxPasswordLength = 4; 
byte currentPasswordLength = 0;
const byte ROWS = 4;  //-----> Chnage this according to your keypad 
const byte COLS = 4;  //-----> Change this according to your keypad
char keys[ROWS][COLS] = {
{'D','#','0','*'},
{'C','9','8','7'},
{'B','6','5','4'},
{'A','3','2','1'}
};

byte rowPins[ROWS] = { 10, 11, 12, 13 };    //------> R0 = 2, R1 = 3, R2 = 4 and R3 = 5.

byte colPins[COLS] = { 6, 7, 8 ,9};    //------->  C0 = 6, C1 = 7, C2 = 8 and C3 = 9.


Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );          // Creates the Keypad

void setup()
{  
  Serial.begin(9600);
  myservo.attach(9);
}

void loop()
{
  char key = kpd.getKey();
  while(key != NO_KEY){processNumberKey(key);
  continue;}
 
    Serial.print(key);
    Serial.print("."); //-----> helps to distinguish in processing 
  
}

void processNumberKey(char key) {
   Serial.print(key);
   currentPasswordLength++;
   password.append(key);
   if (currentPasswordLength == maxPasswordLength) {
      checkPassword();
   } 
}

void checkPassword() {
   if (password.evaluate()){
      for(int i=0;i<=200;i++)
      {
        for(int pos = 0; pos <= 180; pos++)  
        {                                   
            myservo.write(pos);               
            delay(15);                        
        } 
        myservo.write(0);
        for(int pos = 180; pos>=0; pos--)      
        {                                
            myservo.write(pos);               
            delay(15);     
        }
       }
     } 
}
