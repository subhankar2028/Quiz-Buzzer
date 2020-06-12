/*
 * fastestfing.c
 *
 * Created: 9/25/2013 8:17:35 PM
 *  Author: GANESH SELVARAJ
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#define BUZZER PC0

void display(uint16_t val)
{
uint8_t disp[]={0,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F};


switch (val)
{
case 0b11111110:
DDRA=~val;
PORTA=~val;
break;
case 0b11111101:
DDRA=~val;
PORTA=~val;
break;
case 0b11111011:
DDRA=~val;
PORTA=~val;
break;
case 0b11110111:
DDRA=~val;
PORTA=~val;
break;
case 0b11101111:
DDRA=~val;
PORTA=~val;
break;
case 0b11011111:
DDRA=~val;
PORTA=~val;
break;
case 0b10111111:
DDRA=~val;
PORTA=~val;
break;
case 0b01111111:
DDRA=~val;
PORTA=~val;
break;
}
while((PINB & 0b00000001)!=0)
{
_delay_ms(100);
}

DDRA=0x00;
PORTC=0<<0;
}

/*
void Waiting(int j) // simple delay function
{
uint8_t i;
for(i=0;i<j;i++)
_delay_ms(200);
}
*/





int main(void)
{
	
DDRC=1<<0;
DDRA=0x00;
PORTA=0xff;
DDRB=(0<<PB0);
PORTB=(1<<PB0);
DDRC=0xff;
uint16_t val=0;
while(1)
{

if(PINA!=0xFF)
{
val=PINA;
PORTC=1<<0;
display(val);
}
}
}