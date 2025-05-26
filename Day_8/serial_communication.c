//Header file
#include<reg51.h> 

void delay();

void delay() {
    int i, j;
    for (i = 0; i < 100; i++)
        for (j = 0; j < 1275; j++);  // Rough delay loop
}

//Main function
void main() 
{
	while (1) 
	{
	SCON = 0x50;   
	TMOD = 0x20;   //Timer 1 Mode 2
	TH1 = -3;     //9600 Baud rate
	TR1 = 1;
	
	SBUF = 'G';
	while (TI == 0);
	TI = 0;
	delay();
	
		SBUF = 'A';
	while (TI == 0);
	TI = 0;
		delay();
	
		SBUF = 'N';
	while (TI == 0);
	TI = 0;
		delay();
	
		SBUF = 'E';
	while (TI == 0);
	TI = 0;
		delay();
		
		SBUF = 'S';
	while (TI == 0);
	TI = 0;
		delay();
	
		SBUF = 'H';
	while (TI == 0);
	TI = 0;
		delay();
		
		
}
	}


