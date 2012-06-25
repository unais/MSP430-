/*******Here I'm use common anod 7 segment display*************/
#include<msp430.h>
void delay()
{
	int i;
	for(i=0;i<30000;i++);
}
void main()
{
	P1DIR =0xff;
	while(1)
	{
		P1OUT =0xf9;
		delay();
		P1OUT =0xc4;
		delay();
		P1OUT =0xd0;
		delay();
		P1OUT =0x99;
		delay();
		P1OUT =0x92;
		delay();
		P1OUT =0x82;
		delay();
		P1OUT =0xf8;
		delay();
		P1OUT =0x00;
		delay();
		P1OUT =10;
		delay();
	}
}
