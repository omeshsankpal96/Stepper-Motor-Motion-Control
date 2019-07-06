int Pin1 = PB5;
int Pin2 = PB4;
int Pin3 = PB3;
int Pin4 = PB2;
void setup() {
  // put your setup code here, to run once:
DDRB = B00111100;
PORTB = B00000000;

}

void loop() {
  // put your main code here, to run repeatedly:

PORTB = (1 << Pin4) | PORTB;
PORTB = (1 << Pin3) | PORTB;
delay(2);
PORTB = (0 << Pin4) & PORTB;
PORTB = (1 << Pin2) | PORTB;
delay(2);
PORTB = (0 << Pin3) & PORTB;
PORTB = (1 << Pin1) | PORTB;
delay(2);
PORTB = (0 << Pin2) & PORTB;
PORTB = (1 << Pin4) | PORTB;
delay(2);
PORTB = (0 << Pin1) & PORTB;
}
