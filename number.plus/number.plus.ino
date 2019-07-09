void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

int i,t=11;
void loop()
{
    
    if(Serial.available()>0)
  {
    i=Serial.read()-48;
    digitalWrite(t,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    if(i>7)
    {
      digitalWrite(5,HIGH);
      i-=8;
    }
    if(i>3)
    {
      digitalWrite(4,HIGH);
      i-=4;
    }
    if(i>1)
    {
      digitalWrite(3,HIGH);
      i-=2;
    }
    if(i==1)
    digitalWrite(2,HIGH);
    digitalWrite(t--,HIGH);
  }
  if(t==7) 
  t=11;
   
}