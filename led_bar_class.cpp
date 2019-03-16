/* 
* led_bar_class.cpp
*
* Created: 13.03.2019 16:25:12
* Author: Woocheck
*/

#include <avr/io.h>
#include "led_bar_settings.h"
#include "led_bar_class.h"


// default constructor
led_bar_class::led_bar_class()
{
} //led_bar_class

// default destructor
led_bar_class::~led_bar_class()
{
} //~led_bar_class

void led_bar_class::init()
{
	LED_1_DDR |= (1<<LED_1_BIT);
	LED_2_DDR |= (1<<LED_2_BIT);
	LED_3_DDR |= (1<<LED_3_BIT);
	LED_4_DDR |= (1<<LED_4_BIT);
	LED_5_DDR |= (1<<LED_5_BIT);
	LED_6_DDR |= (1<<LED_6_BIT);
	LED_7_DDR |= (1<<LED_7_BIT);
	LED_8_DDR |= (1<<LED_8_BIT);
	LED_9_DDR |= (1<<LED_9_BIT);
	LED_10_DDR |= (1<<LED_10_BIT);
}

void led_bar_class::procent_display(uint8_t procent)
{
	procent>=0 ? LED_1_PORT|=(1<<LED_1_BIT) : LED_1_PORT &=~(1<<LED_1_BIT);
	procent>=20 ? LED_2_PORT|=(1<<LED_2_BIT) : LED_2_PORT &=~(1<<LED_2_BIT);
	procent>=30 ? LED_3_PORT|=(1<<LED_3_BIT) : LED_3_PORT &=~(1<<LED_3_BIT);
	procent>=40 ? LED_4_PORT|=(1<<LED_4_BIT) : LED_4_PORT &=~(1<<LED_4_BIT);
	procent>=50 ? LED_5_PORT|=(1<<LED_5_BIT) : LED_5_PORT &=~(1<<LED_5_BIT);
	procent>=60 ? LED_6_PORT|=(1<<LED_6_BIT) : LED_6_PORT &=~(1<<LED_6_BIT);
	procent>=70 ? LED_7_PORT|=(1<<LED_7_BIT) : LED_7_PORT &=~(1<<LED_7_BIT);
	procent>=80 ? LED_8_PORT|=(1<<LED_8_BIT) : LED_8_PORT &=~(1<<LED_8_BIT);
	procent>=90 ? LED_9_PORT|=(1<<LED_9_BIT) : LED_9_PORT &=~(1<<LED_9_BIT);
	procent>=100? LED_10_PORT|=(1<<LED_10_BIT) : LED_10_PORT &=~(1<<LED_10_BIT);
}