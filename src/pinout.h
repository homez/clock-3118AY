#ifndef _PINOUT_H_
#define _PINOUT_H_

#include "STC15.H"

sbit row0 = P0^0;	//
sbit row1 = P0^1;	//
sbit row2 = P0^2;	//
sbit row3 = P0^3;	//
sbit row4 = P0^4;	//
sbit row5 = P0^5;	//
sbit row6 = P0^6;	//
sbit row7 = P0^7;	//

sbit col00 = P2^0;	//
sbit col01 = P2^1;	//
sbit col02 = P2^2;	//
sbit col03 = P2^3;	//
sbit col04 = P2^4;	//
sbit col05 = P2^5;	//
sbit col06 = P2^6;	//
sbit col07 = P2^7;	//
sbit col08 = P3^4;	//
sbit col09 = P3^5;	//
sbit col10 = P3^6;	//
sbit col11 = P3^7;	//
sbit col12 = P4^1;	//
sbit col13 = P4^2;	//
sbit col14 = P4^3;	//
sbit col15 = P4^4;	//
sbit col16 = P1^0;	//
sbit col17 = P1^1;	//
sbit col18 = P4^7;	//
sbit col19 = P1^2;	//
sbit col20 = P1^3;	//
sbit col21 = P3^2;	//
sbit col22 = P4^5;	//
sbit col23 = P4^6;	//

sbit DS1302_CE = P4^0;	// RTC CE
sbit DS1302_IO = P1^5;	// RTC I/O
sbit DS1302_SCLK = P5^5;	// RTC SCLK

sbit key_s1 = P3^1;	//  +  key
sbit key_s2 = P3^3;	//  -  key

sbit beep = P5^4;	// beeper

sbit  ACC0 = ACC^0;
sbit  ACC7 = ACC^7;

#endif /* _PINOUT_H_ */
