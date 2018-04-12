void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(2,INPUT_PULLUP);
  //pinMode(4, INPUT_PULLUP);
  //pinMode(5,INPUT_PULLUP);
  //pinMode(6,INPUT_PULLUP);
  pinMode(7,OUTPUT);
  //pinMode(3,OUTPUT);
  //pinMode(1,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}
int recieve()
{
  int kl=0;
  //delay(100);
  while(analogRead(5)<600)
  {
    kl++;
    delay(225);
  }
  //Serial.println(analogRead(5));
  return kl;
}

void blink1(int i)
{
  int k=0;
  for(k=0;k<i;k++)
  {
    digitalWrite(7,HIGH);
    delay(300);
    digitalWrite(7,LOW);
    delay(300);
  }
}

void loop() {
  Serial.println(analogRead(5));

  int k=recieve();
  switch(k){
    case 1:
    //blink1(1);
    digitalWrite(8,!digitalRead(8));
    break;
    case 2:
    //blink1(2);
    digitalWrite(9,!digitalRead(9));
    break;
    case 3:
    //blink1(3);
    digitalWrite(10,!digitalRead(10));
    
    break;
    default:
    //Serial.print(k);
    break;
  }
  //Serial.println(analogRead(5));
 }
