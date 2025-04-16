#include<reg51.h>

//Motor Declarations
sbit motop=P1^0;
sbit moton=P1^1;

//Main Function
void main() {
unsigned int i;
motop=moton=0; 
	
//Delay Function
while(1) 
{
motop=1;    //Clockwise Direction
moton=0;
for (i=0 ; i<600000 ; i++);
	
motop=0;    //Anticlockwise Direction
moton=1;
for (i=0 ; i<600000 ; i++);
}
}

