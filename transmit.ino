#include<IRremote.h>
IRsend irsend;
char data[7]={'a','b','3','5','d','3','4'};
void setup() 
{
 
}

void loop() 
{
  for(int i=0;i<7;i++)
  {
     irsend.sendSony(data[i],16);
     delay(100);
  }
}
