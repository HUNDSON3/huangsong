//f 前进；b 后退；l 左转；r 右转；s 后退；

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

int income;
void loop()
{
  if(Serial.available()>0)
  {
   income=Serial.read();
    switch(income)
    {
      case'f':forward();break;
      case'b':back();break;
      case'l':left();break;
      case'r':right();break;
      case's':stop();break;
    }
  }
}


void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void back()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void left()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void right()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
