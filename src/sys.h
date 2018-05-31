#ifndef _SYS_H_
#define _SYS_H_

#include "STC15.H"

#define SYSCLK_18 18432
#define SYSCLK_11 11059
#define SYSCLK_06 6000
#define SYSCLK SYSCLK_06

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

typedef signed char int8_t;
typedef short int16_t;
typedef long int32_t;

#define ELEMENTS(a) sizeof(a) / sizeof(a[0])
	
#endif /* _SYS_H_ */

/*
Checking target MCU ... 
  MCU type: STC15F2K16S2 
  F/W version: 7.2.5S

Current H/W Option:
  . Current system clock source is internal IRC oscillator
  . IRC frequency: 6.005MHz
  . Oscillator gain is HIGH
  . Wakeup Timer frequency: 36.100KHz
  . Do not detect the level of P3.2 and P3.3 next download
  . Power-on reset, use the extra power-on delay
  . RESET pin behaves as I/O pin
  . Reset while detect a Low-Voltage
  . Thresh voltage level of the built-in LVD : 3.82 V
  . Inhibit EEPROM operation under Low-Voltage
  . Hardware do not enable Watch-Dog-Timer
  . Watch-Dog-Timer pre-scalar : 256
  . Watch-Dog-Timer stop count in idle mode
  . Program can modify the Watch-Dog-Timer scalar
  . Do not erase user EEPROM area at next download
  . Do not control 485 at next download
  . Do not check user password next download
  . TXD is independent IO
  . TXD pin as quasi-bidirectional mode after reset
  . P2.0 output HIGH level after reset
  . Testing time: 2017-8-9

  . MCU type: STC15F2K16S2
  F/W version: 7.2.5S


  Complete !(2017-12-17 22:38:23)
*/