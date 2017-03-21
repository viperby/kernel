/*
 * include/linux/power/ricoh61x_battery_init.h
 *
 * Battery initial parameter for RICOH R5T618/619 power management chip.
 *
 * Copyright (C) 2012-2013 RICOH COMPANY,LTD
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef __LINUX_POWER_RICOH61X_BATTERY_INIT_H
#define __LINUX_POWER_RICOH61X_BATTERY_INIT_H

#if 0
/*for 520mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0A, 0x56, 0x0B, 0xBF, 0x0B, 0xDC, 0x0B, 0xFC,
		0x0C, 0x1B, 0x0C, 0x3C, 0x0C, 0x60, 0x0C, 0x8E,
		0x0C, 0xD0, 0x0D, 0x14, 0x0D, 0x6f, 0x01, 0xE5,
		0x00, 0xA8, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_SMALL_CAPACITY_BATTERY
/*for <=260A*/
uint8_t battery_init_para[][32] = {
	{
		0x0A, 0x56, 0x0B, 0xBF, 0x0B, 0xDC, 0x0B, 0xFC,
		0x0C, 0x1B, 0x0C, 0x3C, 0x0C, 0x60, 0x0C, 0x8E,
		0x0C, 0xD0, 0x0D, 0x14, 0x0D, 0x6f, 0x00, 0xF0,
		0x01, 0x29, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_300MAH_RAYPAI_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = { 
        {   
		0x09, 0xD0, 0x0B, 0xAE, 0x0B, 0xD8, 0x0B, 0xFA,
		0x0C, 0x0D, 0x0C, 0x27, 0x0C, 0x4A, 0x0C, 0x81,
		0x0C, 0xBF, 0x0D, 0x02, 0x0D, 0x69, 0x01, 0x2C,
		0x00, 0xA8, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_300MAH_CAPACITY_BATTERY
/*for 320mA*/
uint8_t battery_init_para[][32] = { 
        {   
	        0x0B, 0x11, 0x0B, 0xD0, 0x0B, 0xF7, 0x0C, 0x0F, 
		0x0C, 0x24, 0x0C, 0x3E, 0x0C, 0x66, 0x0C, 0xA5, 
		0x0C, 0xDC, 0x0D, 0x1E, 0x0D, 0x6F, 0x01, 0x31, 
		0x01, 0x09, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56	
	}   
};
#endif

#ifdef CONFIG_320MAH_CAPACITY_BATTERY
/*for 320mA*/
uint8_t battery_init_para[][32] = { 
        {   
	        0x0B, 0x20, 0x0B, 0x59, 0x0B, 0x9B, 0x0B, 0xE2,
		0x0C, 0x07, 0x0C, 0x15, 0x0C, 0x3D, 0x0C, 0x7A,
		0x0C, 0xBA, 0x0D, 0x04, 0x0D, 0x66, 0x01, 0x4F,
		0x01, 0xB3, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}   
};
#endif

#ifdef CONFIG_350MAH_DISATCH_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
        {
	        0x0B, 0x25, 0x0B, 0xD1, 0x0B, 0xED, 0x0C, 0x09,
		0x0C, 0x1B, 0x0C, 0x2E, 0x0C, 0x46, 0x0C, 0x6B,
		0x0C, 0xA2, 0x0C, 0xCD, 0x0D, 0x0E, 0x01, 0x3B,
		0x00, 0xFA, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
        }
}; 
#endif

#ifdef CONFIG_400MAH_PARAMOUNT_CAPACITY_BATTERY
/*for paramount 400mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0B, 0x3B, 0x0B, 0xCA, 0x0B, 0xF7, 0x0C, 0x13,
		0x0C, 0x30, 0x0C, 0x55, 0x0C, 0x91, 0x0C, 0xDB,
		0x0D, 0x29, 0x0D, 0x7F, 0x0D, 0xCE, 0x01, 0x8F,
		0x01, 0x45, 0x0F, 0xC8, 0x05, 0x29, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_400MAH_KEPTER_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
  {
    0x0B, 0x32, 0x0B, 0xD0, 0x0B, 0xF8, 0x0C, 0x0D,
    0x0C, 0x1D, 0x0C, 0x37, 0x0C, 0x5C, 0x0C, 0x92,
    0x0C, 0xC9, 0x0D, 0x0F, 0x0D, 0x6D, 0x01, 0xb6,
    0x01, 0x36, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
  }
};
#endif

#ifdef CONFIG_400MAH_WESEEING_CAPACITY_BATTERY
/*for weseeing 400mA*/
uint8_t battery_init_para[][32] = {
    {
	    0x0B, 0x32, 0x0B, 0xD2, 0x0B, 0xF8, 0x0C, 0x0F, 
	    0x0C, 0x22, 0x0C, 0x3B, 0x0C, 0x60, 0x0C, 0x99, 
	    0x0C, 0xD2, 0x0D, 0x15, 0x0D, 0x6F, 0x01, 0x94, 
	    0x01, 0x1D, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
    }
};
#endif

#ifdef CONFIG_430MAH_CRUISE_CAPACITY_BATTERY
/*for cruise 430mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0B, 0x19, 0x0B, 0xCD, 0x0B, 0xF9, 0x0C, 0x11, 
		0x0C, 0x24, 0x0C, 0x3E, 0x0C, 0x67, 0x0C, 0xA5, 
		0x0C, 0xDD, 0x0D, 0x1E, 0x0D, 0x6F, 0x01, 0xB8, 
		0x00, 0xFA, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56		
	}
};
#endif


#ifdef CONFIG_500MAH_CRUISE_CAPACITY_BATTERY
/*for cruise 500mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0B, 0x33, 0x0B, 0xD1, 0x0B, 0xF8, 0x0C, 0x0E, 
		0x0C, 0x21, 0x0C, 0x3B, 0x0C, 0x61, 0x0C, 0x98, 
		0x0C, 0xCE, 0x0D, 0x15, 0x0D, 0x6E, 0x01, 0xFC, 
		0x01, 0x1D, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_500MAH_LG1_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
	{
	        0x0B, 0x2A, 0x0B, 0xD5, 0x0B, 0xF7, 0x0C, 0x11,
		0x0C, 0x28, 0x0C, 0x42, 0x0C, 0x66, 0x0C, 0xA8,
		0x0C, 0xDA, 0x0D, 0x23, 0x0D, 0x70, 0x02, 0x02,
		0x00, 0xFF, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56 
	}
};
#endif

#ifdef CONFIG_500MAH_LG2_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
	{
                0x0B, 0x0B, 0x0B, 0x61, 0x0B, 0x93, 0x0B, 0xC3,
		0x0B, 0xFB, 0x0C, 0x39, 0x0C, 0x6D, 0x0C, 0xA0,
		0x0C, 0xD6, 0x0C, 0xFF, 0x0D, 0x6F, 0x01, 0xC6,
		0x00, 0xBE, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56 
	}
};
#endif

#ifdef CONFIG_500MAH_DOOR_CAPACITY_BATTERY
/*for door 500mA*/
uint8_t battery_init_para[][32] = {
	{
                0x0B, 0x14, 0x0B, 0xB1, 0x0B, 0xE5, 0x0C, 0x07,
		0x0C, 0x19, 0x0C, 0x2B, 0x0C, 0x47, 0x0C, 0x7C,
		0x0C, 0xAF, 0x0C, 0xE7, 0x0D, 0x3E, 0x02, 0x24,
		0x00, 0xC8, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_600MAH_REGULARITY_CAPACITY_BATTERY
/*for regularity 600mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0B, 0x63, 0x0B, 0xD3, 0x0B, 0xFC, 0x0C, 0x14, 
		0x0C, 0x22, 0x0C, 0x38, 0x0C, 0x62, 0x0C, 0x96, 
		0x0C, 0xCA, 0x0D, 0x09, 0x0D, 0x6B, 0x02, 0x76, 
		0x00, 0xE1, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_780MAH_RAYPAI_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
	{
                0x0B, 0x33, 0x0B, 0xCC, 0x0B, 0xF3, 0x0C, 0x0F,
		0x0C, 0x26, 0x0C, 0x42, 0x0C, 0x6B, 0x0C, 0xA7,
		0x0C, 0xE6, 0x0D, 0x2A, 0x0D, 0x88, 0x02, 0xBC,
		0x00, 0xC3, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_850MAH_RAYPAI_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
	{
		0x0A, 0x2C, 0x0B, 0x9C, 0x0B, 0xD7, 0x0B, 0xF5,
		0x0C, 0x0C, 0x0C, 0x26, 0x0C, 0x52, 0x0C, 0x8C,
		0x0C, 0xE1, 0x0D, 0x35, 0x0D, 0xDB, 0x03, 0x52,
		0x00, 0x91, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_2000MAH_ZBRZFY_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
	{
	        0x0B, 0x6B, 0x0B, 0xD9, 0x0B, 0xFF, 0x0C, 0x18,
		0x0C, 0x31, 0x0C, 0x53, 0x0C, 0x87, 0x0C, 0xCA,
		0x0D, 0x22, 0x0D, 0x74, 0x0D, 0xD6, 0x07, 0x8E,
		0x00, 0x7C, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_2300MAH_ZBRZFY_CAPACITY_BATTERY
/*for 2300mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0A, 0x8E, 0x0B, 0xA7, 0x0B, 0xD0, 0x0B, 0xEB, 
		0x0C, 0x04, 0x0C, 0x28, 0x0C, 0x56, 0x0C, 0x8C, 
		0x0C, 0xE4, 0x0D, 0x38, 0x0D, 0xD1, 0x08, 0xFC, 
		0x00, 0x3E, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56

	}
};
#endif

#ifdef CONFIG_2500MAH_HJ_CAPACITY_BATTERY
uint8_t battery_init_para[][32] = {
	{
	        0x0A, 0x71, 0x0B, 0xA6, 0x0B, 0xCC, 0x0B, 0xF8, 
		0x0C, 0x16, 0x0C, 0x32, 0x0C, 0x50, 0x0C, 0x79, 
		0x0C, 0xB7, 0x0C, 0xF7, 0x0D, 0x3D, 0x06, 0xFD, 
		0x00, 0x84, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif

#ifdef CONFIG_LARGE_CAPACITY_BATTERY
/*for 4000mA*/
uint8_t battery_init_para[][32] = {
	{
		0x0B, 0x0D, 0x0B, 0xC3, 0x0B, 0xF1, 0x0C, 0x0E,
		0x0C, 0x20, 0x0C, 0x38, 0x0C, 0x5C, 0x0C, 0x98,
		0x0C, 0xCD, 0x0D, 0x0A, 0x0D, 0x5A, 0x0E, 0x38,
		0x00, 0x4B, 0x0F, 0xC8, 0x05, 0x2C, 0x22, 0x56
	}
};
#endif
uint8_t impe_init_para[][20] = {
	{
		0x03, 0xEB, 0x01, 0x74, 0x01, 0x3E, 0x01, 0x3E, 0x01, 0x39,
		0x01, 0x2F, 0x01, 0x1E, 0x01, 0x1E, 0x01, 0x47, 0x01, 0x2E
	}
};

#endif

/*
   <Other Parameter>
   nominal_capacity=219
   cut-off_v=3000
   thermistor_b=3435
   board_impe=0
   bat_impe=07104
   load_c=100
   available_c=219
   battery_v=3159
   MakingMode=Normal
   ChargeV=4.20V
   LoadMode=Load
 */

/*
   <raypai oled 300mah>
   2017/2/10 11:36:49  Version:1.0.4
   RTotal=401.724137931034
   RBat=351.724137931034
   Cavailable=291.804444444444
   Rsense=50
   BValue=3435
   ChargeCompleteVoltage=4200
   ChargeCompleteCurrent=20
   C=300
   I=58
   Trest=600
   Tdsg=1800
   Tlast=1912
   V0=4191.6
   V1=4067.1
   V2=3984.7
   V3=3908.9
   V4=3842.2
   V5=3799.1
   V6=3768.5
   V7=3744.2
   V8=3702.7
   V9=3652.2
   V10=3068.2
   V1L=4043.2
   V2L=3960.3
   V3L=3884
   V4L=3816.5
   V5L=3772.8
   V6L=3740.6
   V7L=3714.9
   V8L=3671.5
   V9L=3617.1
   V10L=2999.2
   OCV_100=4191.6
   OCV_90=4067.1
   OCV_80=3984.7
   OCV_70=3908.9
   OCV_60=3842.2
   OCV_50=3799.1
   OCV_40=3768.5
   OCV_30=3744.2
   OCV_20=3702.7
   OCV_10=3593.8
   OCV_0=3068.2
*/

/*
  2017/3/2 9:13:43  Version:1.0.4
  RTotal=346.470588235294
  RBat=296.470588235294
  Cavailable=846.222222222222
  Rsense=50
  BValue=3435
  ChargeCompleteVoltage=4350
  ChargeCompleteCurrent=50
  C=850
  I=170
  Trest=600
  Tdsg=1800
  Tlast=1720
  V0=4331.1
  V1=4128.8
  V2=4025.8
  V3=3922.6
  V4=3851.9
  V5=3798.4
  V6=3765.9
  V7=3738.5
  V8=3701.7
  V9=3630.2
  V10=3179.8
  V1L=4067.8
  V2L=3967.7
  V3L=3861.4
  V4L=3789.8
  V5L=3732.4
  V6L=3691.8
  V7L=3650.7
  V8L=3594.7
  V9L=3491.8
  V10L=2999.7
  OCV_100=4331.1
  OCV_90=4128.8
  OCV_80=4025.8
  OCV_70=3922.6
  OCV_60=3851.9
  OCV_50=3798.4
  OCV_40=3765.9
  OCV_30=3738.5
  OCV_20=3701.7
  OCV_10=3630.2
  OCV_0=3179.8
 */
