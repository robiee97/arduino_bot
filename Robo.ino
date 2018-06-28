int LmotorUp = 6; 
int LmotorDn = 7; 
int RmotorUp = 4; 
int RmotorDn = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(LmotorUp,OUTPUT); 
  pinMode(LmotorDn,OUTPUT);
  pinMode(RmotorUp,OUTPUT);
  pinMode(RmotorDn,OUTPUT);
  Serial.println("<Robot name> Welcomes you");
  delay(1000);
} 
  

void loop()
{
  if(Serial.available()>0)
  {
    int input = Serial.read(); 
    switch(input)
    {
     case 'F' : MoveF();  
     break;
     case 'B' : MoveB(); 
     break;
     case 'L' : MoveL(); 
     break;
     case 'R' : MoveR();
     break;
     case 'S' : Stop();
     break;
     default : break;
    }
  } 
  delay(50);
}

void MoveF()
{
  Serial.println("<Robot Name> Forward");
  digitalWrite(LmotorUp,HIGH); 
  digitalWrite(LmotorDn,LOW); 
  digitalWrite(RmotorUp,HIGH);
  digitalWrite(RmotorDn,LOW); 
   
}

void MoveB()
{
  Serial.println("<Robot Name> Backward");
  digitalWrite(LmotorUp,LOW); 
  digitalWrite(LmotorDn,HIGH);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,HIGH);
}

void MoveL()
{
  Serial.println("<Robot Name> Left");
  digitalWrite(LmotorUp,LOW); 
  digitalWrite(LmotorDn,LOW); 
  digitalWrite(RmotorUp,HIGH);
  digitalWrite(RmotorDn,LOW);
}

void MoveR()
{
  Serial.println("<Robot Name> Right");
  digitalWrite(LmotorUp,HIGH);
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,LOW);
}

void Stop()
{
  Serial.println("<Robot Name> Stop");
  digitalWrite(LmotorUp,LOW);
  digitalWrite(LmotorDn,LOW);
  digitalWrite(RmotorUp,LOW);
  digitalWrite(RmotorDn,LOW);
}
