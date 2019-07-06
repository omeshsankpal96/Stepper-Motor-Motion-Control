int Pin1 = PB5;
int Pin2 = PB4;
int Pin3 = PB3;
int Pin4 = PB2;
int button1 = PB0;
int step = 0;
//int read_pot = A0;
int delay_time;
int pot_val;
void setup() {
  // put your setup code here, to run once:
DDRB = B00111100;
PORTB = B00000000;
ADMUX = B01000000;
ADCSRA = (1 << ADPS0) & ADCSRA;
ADCSRA = (1 << ADPS1) | ADCSRA;
ADCSRA = (1 << ADPS2) | ADCSRA;
ADCSRA = (1 << ADEN) | ADCSRA;
}

void loop() {
  // put your main code here, to run repeatedly:
  int direc = (PINB & (1 << button1)) >> button1;
switch(step)
{
   case 0: 
PORTB = B00010000;//(1 << Pin4) | PORTB;
break;
   case 1: 
PORTB = B00011000;//(1 << Pin3) | PORTB;
break;
   case 2: 
PORTB = B00001000;//(0 << Pin4) & PORTB;
break;
   case 3: 
PORTB = B00001100;//(1 << Pin2) | PORTB;
break;
   case 4: 
PORTB = B00000100;//(0 << Pin3) & PORTB;
break;
   case 5: 
PORTB = B00000110;//(1 << Pin1) | PORTB;
break;
   case 6: 
PORTB = B00000010;(0 << Pin2) & PORTB;
break;
   case 7: 
PORTB = B00010010;//(1 << Pin4) | PORTB;
   break;
   default:
   PORTB = B00000000;
   break;
}
 if(direc==HIGH)
 { 
   step++; 
 }else{ 
   step--; 
 } 
 if(step>7){ 
   step=0; 
 } 
 if(step<0){ 
   step=7; 
 } 
 ADCSRA = (1 << ADSC) | ADCSRA;
 unsigned short pot_val;
 pot_val = ADC;
 if(pot_val>=8)
 {
 delay_time = (pot_val*150)/1023;
 }
 else
 {
  delay_time = 1;
  }
 
 //pot_val = analogRead(read_pot);
 //delay_time = map(pot_val, 0, 1023, 1, 150);
 delay(delay_time); 
 
 //delay(1); 
}
