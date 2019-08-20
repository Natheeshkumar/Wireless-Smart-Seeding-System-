#include <Servo.h>

char data = 0;  


Servo myservo;  
           
void setup() 
{
  Serial.begin(9600);
        
   myservo.attach(9);  
  
   
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
   pinMode(8, OUTPUT);
  pinMode(2, INPUT); 
  pinMode(3, INPUT); 
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT); 
  

}
void loop()
{
  if(Serial.available() > 0) 
  {
    data = Serial.read();    
    Serial.print(data);   
    Serial.print("\n");        
    if(data == 'F')
    {
      myservo.write(80);
      
      digitalWrite(4, HIGH);
     
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);}
    else if(data == 'B')      
       
       {myservo.write(80);
        digitalWrite(5, HIGH);
       
      digitalWrite(7, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(6, LOW);}
       else if(data == 'R')   
       
       { myservo.write(110);
        digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(7, LOW);}
       else if(data == 'L')      
       
       {
        myservo.write(50); 
        digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);}
     
          else if(data == 'z')
          
       {    myservo.write(80);
        
        digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(13, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);}
          else if(data == 'A')
          
       {   myservo.write(80);
         digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      delay(1000);
        digitalWrite(10, LOW);
      digitalWrite(11, LOW);}
        
        
          else if(data == 'C')
          
       {    
       myservo.write(80);
         digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      delay(1000);
        digitalWrite(10, LOW);
      digitalWrite(11, LOW);
       }
          else if(data == 'X')
          
       {   
        myservo.write(80);
        digitalWrite(12, HIGH);
       }
        else if(data == 'Y')
          
       {   
        myservo.write(80);
        digitalWrite(8, HIGH);
       }
        else if(data == 'M')
          
       {   


myservo.write(80);

         digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      delay(3000);
        digitalWrite(10, LOW);
      digitalWrite(11, LOW);//swf up
            
      myservo.write(90);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);//fw
      delay(10000);
              digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      
         digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      delay(4000);
              digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
        digitalWrite(10, LOW);
      digitalWrite(11, LOW); //swf dn
              digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
        
       digitalWrite(12, HIGH);//driller on
       delay(20000);
        digitalWrite(12, LOW);
        delay(2000);
          digitalWrite(8, HIGH);//seeder on
          delay(3000);
            digitalWrite(8, LOW);//seeder offf
        }
      




 else
          
       {    myservo.write(90);
        
        digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(13, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
        }

}
}

void seedup()
{
  while(digitalRead(2)== HIGH)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
 while(digitalRead(2)== LOW)
 
  {
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  }
  
  }
  void sd()
  {
    
     while(digitalRead(3)== HIGH)
  {
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
  }
 while(digitalRead(3)== LOW)
 
  {
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  }
    
    }
  


