#include "sys.h"
#include "timer.h"
#include "key.h"
#include "display.h"

uint8_t keytest;

void timer1Init(void)
{

	return;
}

void timer0Init(void)
{
	// 111us
	AUXR |= 0x80;		// 1T
	TMOD &= 0xF0;
#if (SYSCLK == SYSCLK_11)
	// @11.059MHz
	TL0 = 0x34;
	TH0 = 0xFB;
#elif (SYSCLK == SYSCLK_18)
	// @18.432MHz
	TL0 = 0x02;
 	TH0 = 0xF8;
#else
	// @6.000MHz
	TL0 = 0x66;
 	TH0 = 0xFD;
#endif
	TF0 = 0;
	TR0 = 1;
	ET0 = 1;

	return;
}

void timerInit(void)
{
	timer0Init();
	timer1Init();
	EA = 1;

	return;
}

void timer0_isr(void) interrupt 1
{
	displayRefresh();
	keytest++;
	if( keytest > 36 ) {
		keytest=0;
		CheckBtn();
	}

	return;
}

void timer1_isr(void) interrupt 3
{

	return;
}