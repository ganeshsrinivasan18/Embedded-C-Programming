#include<reg51.h> //Header File

//common anode pin connections
sbit seg1 = P1^0;
sbit seg2 = P1^1; 
sbit seg3 = P1^2;
sbit seg4 = P1^3;

//Main function

void main()
{
	unsigned int i;
	seg1=seg2=seg3=seg4=0; //initially turn off
	
	while(1) 
		{
		seg1 = 1; //turing on first display
		P2 = 0xc0;
		for(i=0 ; i<2000 ; i++);
		seg1 = 0;  //turning off first display 
			
		seg2 = 1; //turning on second display
		P2 = 0x90;
		for(i=0 ; i<2000 ; i++);
		seg2 = 0; //turning off second display
			
		seg3 = 1; //turning on third display
		P2 = 0xc0;
		for(i=0 ; i<2000 ; i++);
		seg3 = 0; //turning off third display
			
		seg4 = 1; //turning on fourth display
		P2 = 0x92;
		for(i=0 ; i<2000 ; i++);
		seg4 = 0; //turning off fourth display
		}
		
	}
