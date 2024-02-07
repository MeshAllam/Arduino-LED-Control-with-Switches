const int G1 = 2;
const int R1 = 3;
const int R2 = 4;
const int R3 = 5;
const int R4 = 6;
const int G2 = 7;

int switch1 = 8;
int switch2 = 9;

int ReadingOfSw1;
int ReadingOfSw2;


void setup()
{
for(int i = 2; i < 8; i++)
 {
   pinMode(2 ,OUTPUT);  
 }
   pinMode(8 ,INPUT);  
   pinMode(9 ,INPUT);  
}

void loop()
{
  ReadingOfSw1 = digitalRead(switch1);
  ReadingOfSw2 = digitalRead(switch2);
//------------------------------
  if(ReadingOfSw1)
   {
    digitalWrite(G1 ,HIGH);
    digitalWrite(R1 ,HIGH);
   }
  else
   {
    digitalWrite(G1 ,0);
    digitalWrite(R1 ,0);
   }   
//--------------------------------  
    if(ReadingOfSw2)
   {
    digitalWrite(G2 ,1);
    digitalWrite(R3 ,1);
   }
  else
   {
    digitalWrite(G2 ,LOW);
    digitalWrite(R3 ,LOW);
   }  
  
  
  
}