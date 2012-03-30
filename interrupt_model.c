#include <msp430.h>
#define LED1 BIT0
#define TAIFG_VAL (TACTL & TAIFG)
#define CLEAR_TAIFG (TACTL &= ~TAIFG)
#define TOGGLE_LED1 (P1OUT ^= LED1)
main()
{
	TACTL = TASSEL_2 | MC_2 | ID_3;
	P1DIR = LED1;
	P1OUT = LED1;
	while(1) {
		while(TAIFG_VAL == 0);
		CLEAR_TAIFG;
		TOGGLE_LED1;
	}
}

