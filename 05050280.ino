const byte NUM = 8;
const byte led[]={15,14,13,12,11,10,5,4};
const int delaytime = 150;
int pin;
void setup()
{
  for(pin=0;pin<NUM;pin++)
  {
    pinMode(led[pin],OUTPUT);
    digitalWrite (led[pin],HIGH);
  }
}
void loop()
{
  for(pin=0;pin<NUM;pin++) //check point 1
  {
    digitalWrite (led[pin],LOW);
    delay(delaytime);
    digitalWrite (led[pin],HIGH);
  }


for(pin=NUM;pin>=0;pin--)
  {
    digitalWrite (led[pin-1],LOW);
    delay(delaytime);
    digitalWrite (led[pin-1],HIGH);
  }
  delay(delaytime);

for(pin=0;pin<NUM;pin++) //check point 2
  {
    digitalWrite (led[pin],LOW);
    delay(delaytime);
    digitalWrite (led[pin],HIGH);
    delay(delaytime);
    digitalWrite (led[pin],LOW);
    delay(delaytime);
    digitalWrite (led[pin],HIGH);
    delay(delaytime);
  }

 
  for(pin=NUM;pin>=0;pin--) 
  {
    digitalWrite (led[pin-2],LOW);
    delay(delaytime);
    digitalWrite (led[pin-2],HIGH);
    delay(delaytime);
    digitalWrite (led[pin-2],LOW);
    delay(delaytime);
    digitalWrite (led[pin-2],HIGH);
    delay(delaytime);
  }
  delay(delaytime);


}
