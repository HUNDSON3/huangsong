void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

int i;
void loop()
{
  if(Serial.available()>0)
  {
    i=Serial.read()-48;
    digitalWrite(6,LOW);
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
    digitalWrite(6,HIGH);
  }
}