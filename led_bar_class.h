/* 
* led_bar_class.h
*
* Created: 13.03.2019 16:25:12
* Author: Woocheck
*/


#ifndef __LED_BAR_CLASS_H__
#define __LED_BAR_CLASS_H__


#include <avr/io.h>
#include "led_bar_settings.h"

class led_bar_class
{
//variables
public:
protected:
private:
uint8_t proc;
//functions
public:
	led_bar_class();
	~led_bar_class();
	void init();
	void procent_display(uint8_t procent);
protected:
private:
	led_bar_class( const led_bar_class &c );
	led_bar_class& operator=( const led_bar_class &c );
	

}; //led_bar_class

#endif //__LED_BAR_CLASS_H__
