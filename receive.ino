#include<IRremote.h>
int rec=11;
IRrecv irrecv(rec);
decode_results results;
void setup() 

{
  Serial.begin(9600);
  irrecv.enableIRIn(); 
}

void loop()
{
  for(int i=0;i<7;i++)
  {
    if(irrecv.decode(&results))
    {
      Serial.println(char(results.value));
     // delay(10);
      irrecv.resume();
    }
  }

}
