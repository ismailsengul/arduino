int ledGreen = 7;
int ledRed = 6;
int trueButton = 13;
int falseButton = 12;

bool bt_State = 0;
bool bf_State = 0;
int values[] = {1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,0,0,1,0,1};
int i = 0;
void setup() {
  pinMode(ledGreen,OUTPUT);
  pinMode(ledRed,OUTPUT);
  pinMode(trueButton,INPUT);
  pinMode(falseButton,INPUT);
}

void loop() {
  
  
        
        bt_State = digitalRead(trueButton);
        bf_State = digitalRead(falseButton);
        
      
        if(bt_State){
            digitalWrite(ledRed,1-values[i]);
            digitalWrite(ledGreen,values[i]);
                
            i++;
            delay(500);
            
            
        }else if(bf_State){
            digitalWrite(ledRed,values[i]);
            digitalWrite(ledGreen,1-values[i]);
            i++;
            delay(500);
            
         }
         if(i>=20){
            delay(400);
            digitalWrite(ledGreen,1);
            digitalWrite(ledRed,1);
            delay(200);
            digitalWrite(ledGreen,0);
            digitalWrite(ledRed,0);
            delay(200);
          }
         if(bf_State && bt_State){
            i = 0;
            digitalWrite(ledGreen,0);
            digitalWrite(ledRed,0);
          }
    }
    
