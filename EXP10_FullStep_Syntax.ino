int Pin1 = 10;
int Pin2 = 11;
int Pin3 = 12;
int Pin4 = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(Pin1, OUTPUT);
pinMode(Pin2, OUTPUT);
pinMode(Pin3, OUTPUT);
pinMode(Pin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
     digitalWrite(Pin1, LOW);  
     digitalWrite(Pin2, LOW); 
     digitalWrite(Pin3, LOW); 
     digitalWrite(Pin4, LOW);
     delay(1); 
     digitalWrite(Pin4, HIGH); 
     delay(1);
 
     digitalWrite(Pin3, HIGH); 
     delay(1); 
     digitalWrite(Pin4, LOW);
     delay(1);
     digitalWrite(Pin2, HIGH); 
     digitalWrite(Pin3, HIGH);  
     delay(1); 
     digitalWrite(Pin2, HIGH); 
     digitalWrite(Pin3, LOW); 
     delay(1);
          digitalWrite(Pin1, HIGH);  
     digitalWrite(Pin2, HIGH); 

          digitalWrite(Pin1, HIGH);  
     digitalWrite(Pin2, LOW); 
     delay(1);
          digitalWrite(Pin1, HIGH); 
          delay(1); 
     digitalWrite(Pin4, HIGH); 
     delay(1); 
}
