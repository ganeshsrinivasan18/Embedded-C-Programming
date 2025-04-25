#include<reg51.h>

sbit rs = P1^0;
sbit rw = P1^1;
sbit en = P1^2;

void lcdcmd(unsigned char);
void lcddata(unsigned char);
void delay();

void main () 
{
	P2 = 0X00;
	while (1) {
		lcdcmd(0X38);
		delay();
		lcdcmd(0X01);
		delay();
		lcdcmd(0X10);
		delay();
		lcdcmd(0X0c);
		delay();
		lcdcmd(0X81);
		delay();
		lcddata('G');
		delay();
		lcddata('A');
		delay();
		lcddata('N');
		delay();
		lcddata('E');
		delay();
		lcddata('S');
		delay();
		lcddata('H');
		delay();
	}
}

void lcdcmd(unsigned char val)
{
	
	P2 = val;
	rs = 0;
	rw = 0;
	en = 1;
	delay();
	en = 0;
}

void lcddata(unsigned char val)
{
	P2 = val;
	rs = 1;
	rw = 0;
	en = 1;
	delay();
	en = 0;
}

void delay ()
{
	unsigned int i;
	for(i=0; i<12000; i++);
}
