#include "sys.h"
#include "adc.h"
#include "intrins.h"

Adc_type adc;

void adcInit(void)
{
	P1M0 |= 0xC0;
	P1M1 |= 0xC0;

	return;
}

uint16_t getADCResult(uint8_t chanel)
{
	ADC_CONTR = ADC_POWER | ADC_SPEEDHH | ADC_START | chanel;
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	while (!(ADC_CONTR & ADC_FLAG));
	ADC_CONTR &= ~ADC_FLAG;

	return  ADC_RES << 2 | ADC_RESL;
}

uint8_t getADCResult8(uint8_t chanel)
{
	ADC_CONTR = ADC_POWER | ADC_SPEEDHH | ADC_START | chanel;
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	while (!(ADC_CONTR & ADC_FLAG));
	ADC_CONTR &= ~ADC_FLAG;

	return ADC_RES;
}

int8_t gettemp(uint16_t raw) {
   // Формула для преобразования значения АЦП, подключенного
   // к терморезистору ntc (Negative Temperature Coeff,
   // терморезистор с отрицательным коэффициентом)
   // в приблизительное значение градусов Цельсия:
   return 76 - raw * 64 / 637;
}

void adcConvert(void)
{
	adc.RawT = getADCResult(6);
	adc.temp = gettemp(adc.RawT);
	adc.bright = getADCResult8(7)>>3;
}
