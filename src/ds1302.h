#ifndef _RTC_H_
#define _RTC_H_

#include "sys.h"

#define AM(X)	X
#define PM(X)	(X+12)            	  // 转成24小时制
#define DS1302_RAM(X)	(0xC0+(X)*2)   	//用于计算 DS1302_RAM 地址的宏 

enum {
	DS1302_SECOND				= 0x80,
	DS1302_MINUTE				= 0x82,
	DS1302_HOUR					= 0x84,
	DS1302_WEEK					= 0x8A,
	DS1302_DAY					= 0x86,
	DS1302_MONTH				= 0x88,
	DS1302_YEAR					= 0x8C,
	DS1302_BURSTCLOCK		= 0xBE
};


enum {
	RTC_SEC = 0,
	RTC_MIN,
	RTC_HOUR,
	RTC_DATE,
	RTC_MONTH,
	RTC_WDAY,
	RTC_YEAR,
	RTC_ETM,
};

typedef struct {
	uint8_t sec;
	uint8_t min;
	uint8_t hour;
	uint8_t date;
	uint8_t month;
	uint8_t wday;
	uint8_t year;
	uint8_t etm;
} RTC_type;

extern RTC_type rtc;

#define RTC_NOEDIT			0xFF

void rtcInit(void);
void rtcReadTime(void);
void rtcSaveTime(void);
void rtcSaveDate(void);
void rtcNextEditParam(void);
void rtcChangeTime(uint8_t diff);
uint8_t rtcDaysInMonth(void);
uint16_t rtcYearDay(void);

uint8_t rtcBinDecToDec(uint8_t num);
uint8_t rtcDecToBinDec(uint8_t num);

#endif /* _RTC_H_ */