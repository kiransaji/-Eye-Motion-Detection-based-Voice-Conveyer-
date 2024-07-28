String name1[20]={"I NEED HELP     " ,"I WANT WATER     ","I NEED FOOD    ","NEED TO GO WASHROOM"};
int count=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(A0)==LOW)
{Serial.println("Eye blink")  ;
  while(1)
  {
  for(int i=0;i<=5;i++)
  {
  for(int j=0;j<=100;j++)
  {
    if(digitalRead(A0)==LOW)
     {while(digitalRead(A0)==LOW)
     {}
     count=count+1;  
     Serial.println(count)  ;  
      }
  delay(10);  
  }  
  }
  break;  
  }
  digitalWrite(11,HIGH);
  if(count==1)
{  Serial.println(name1[0]);}
else if(count==2)
{Serial.println(name1[1]);}
else if(count==3)
{Serial.println(name1[2]);}
else if(count>=4)
{Serial.println(name1[03]);}
delay(1000);
digitalWrite(11,LOW);
count=0;
  delay(1000);
}
}
