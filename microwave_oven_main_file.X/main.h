/* 
 * File:   main.h
 * Author: abhi1
 *
 * Created on 5 October, 2023, 12:51 AM
 */

#ifndef MAIN_H
#define	MAIN_H
#include <xc.h>
#include "clcd.h" 
#include "matrix_keypad.h"
#include "timers.h"

#define POWER_ON_SCREEN      0x01
#define MENU_DISPLAY_SCREEN  0X02
#define MICRO_MODE          0x03
#define GRILL_MODE          0X04
#define CONVECTION_MODE     0X05
#define START_MODE          0x06
#define TIME_DISPLAY        0X07
#define START            0x08
#define PAUSE               0x09
#define STOP                0x0A


#define RESET_NOTHING          0x0F
#define MODE_RESET             0x10
#define RESET_TEMP             0x11


#define FAN                    RC2
#define FAN_DDR                 TRISC2
#define BUZZER                  RC1
#define BUZZER_DDR              TRISC1
 #define DOOR                    RB3              
#define DOOR_DDR                 TRISB3 
#define ON                         1
#define OFF                        0
void Power_on_screen(void);
void menu_display_screen(void);
void clear_screen(void);
void set_time(unsigned char key, int reset_flag);
void  time_display_screen(void);
void set_temp (unsigned char key, int reset_flag );
#endif	/* MAIN_H */

