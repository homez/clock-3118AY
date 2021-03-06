#ifndef _MENUPICTURE_H_
#define _MENUPICTURE_H_

#include "sys.h"

const uint8_t code pic_Time[24] = {0x00,0x00,0x60,0x7F,0x7F,0x60,0x00,0x6F,0x6F,0x00,0x7F,0x3F,0x10,0x1F,0x10,0x3F,0x7F,0x00,0x7F,0x7F,0x49,0x49,0x00,0x00},
				pic_Date[24] = 						{0x00,0x7F,0x7F,0x63,0x36,0x1C,0x00,0x1F,0x3F,0x6C,0x6C,0x3F,0x1F,0x00,0x60,0x7F,0x7F,0x60,0x00,0x7F,0x7F,0x49,0x49,0x00},
				pic_Alarm[24] = 					{0x00,0x3F,0x7F,0x4C,0x7F,0x3F,0x00,0x7F,0x7F,0x03,0x03,0x00,0x3F,0x7F,0x4C,0x7F,0x3F,0x00,0x7F,0x7F,0x6C,0x6C,0x37,0x00},
				pic_HourSignal[24] = 			{0x00,0x00,0x00,0x00,0x3E,0x41,0x41,0x71,0x49,0x49,0x3E,0x00,0x00,0x00,0x06,0x3A,0x43,0x3A,0x06,0x00,0x00,0x00,0x00,0x00},
				pic_Font[24] = 						{0x00,0x7F,0x7F,0x68,0x68,0x00,0x3E,0x7F,0x41,0x7F,0x3E,0x00,0x7F,0x3F,0x18,0x0C,0x7E,0x7F,0x00,0x60,0x7F,0x7F,0x60,0x00},
				pic_Disp[24] = 						{0x00,0x7F,0x7F,0x41,0x63,0x3E,0x1C,0x00,0x6F,0x6F,0x00,0x32,0x7B,0x49,0x6F,0x26,0x00,0x7F,0x7F,0x44,0x6C,0x38,0x00,0x00},
				pic_Dot[24] = 						{0x00,0x7F,0x3F,0x10,0x1F,0x10,0x3F,0x7F,0x00,0x6F,0x6F,0x00,0x7F,0x7F,0x63,0x36,0x1C,0x00,0x7F,0x7F,0x6C,0x6C,0x38,0x00},
				pic_Bright[24] = 					{0x00,0x7F,0x7F,0x49,0x7F,0x36,0x00,0x7F,0x7F,0x6C,0x6C,0x37,0x00,0x6F,0x6F,0x00,0x3E,0x7F,0x41,0x4D,0x2E,0x00,0x00,0x00},
				pic_TimeCoef[24] = 				{0x00,0x00,0x3E,0x41,0x41,0x71,0x49,0x49,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x7D,0x11,0x11,0x00,0x00,0x00},
				//pic_TempKoef[22] = 			{0x00,0x33,0x33,0x00,0x3E,0x7F,0x41,0x63,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
				pic_On[24] = 							{0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x41,0x7F,0x7F,0x00,0x7F,0x7F,0x38,0x1C,0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},
				pic_Off[24] = 						{0x00,0x00,0x00,0x00,0x7F,0x7F,0x41,0x7F,0x7F,0x00,0x7F,0x7F,0x6C,0x6C,0x00,0x7F,0x7F,0x6C,0x6C,0x00,0x00,0x00,0x00,0x00},
				pic_Type[16] = 						{0x60,0x7F,0x7F,0x60,0x00,0x73,0x0B,0x7E,0x7C,0x00,0x7F,0x7F,0x4C,0x38,0x00,0x36},
				pic_BrEdit[16] = 					{0x00,0x7F,0x7F,0x49,0x49,0x7F,0x36,0x00,0x7F,0x7F,0x4C,0x4E,0x7B,0x31,0x00,0x36},
				pic_TempCoef[24] = 				{0x00,0x00,0x00,0x70,0x50,0x70,0x00,0x3E,0x7F,0x63,0x41,0x41,0x00,0x00,0x00,0x00,0x11,0x11,0x7D,0x11,0x11,0x00,0x00,0x00},
				pic_DS1302[24] = 					{0x00, 0x7F, 0x41, 0x3E, 0x00, 0x32, 0x49, 0x26, 0x00, 0x20, 0x7F, 0x00, 0x22, 0x49, 0x36, 0x00, 0x3E, 0x41, 0x3E, 0x00, 0x23, 0x45, 0x39, 0x00},
				pic_heart[24] = 							{0x60, 0xF0, 0xF8, 0xFC, 0x7E, 0x3F, 0x7E, 0xFC, 0xF8, 0xF0, 0x60, 0x00, 0x60, 0xF0, 0xF8, 0xFC, 0x7E, 0x3F, 0x7E, 0xFC, 0xF8, 0xF0, 0x60, 0x00}
				;

#endif /* _MENUPICTURE_H_ */
