void setup() {
  // put your setup code here, to run once:
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(3,OUTPUT);

}
int blink(int j,int n)
{
  delay(50);
  int i,k=0;
  for(i=1;i<=n;i++)
  {
    digitalWrite(j,HIGH);
    delay(100);
    digitalWrite(j,LOW);
    delay(100);
    
  }
}

void loop() {
  int i = 0,k=0;
  if(digitalRead(4)==LOW)
  {k=blink(3,1);}
  else if(digitalRead(5)==LOW)
  {k=blink(3,2);}
  else if(digitalRead(7)==LOW)
  {k=blink(3,3);}

}
