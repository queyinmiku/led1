#include "bsp_led.h"

uint8_t led_state=0;
void LED_Ctl(uint8_t state)
{
 for(uint8_t i=0;i<=8;i++)
  {
	if(led_state&(1<<i))
   {
	   HAL_GPIO_WritePin(GPIOC,1<<(8+i),GPIO_PIN_RESET);
	 }
	else
   {
	 HAL_GPIO_WritePin(GPIOC,1<<(8+i),GPIO_PIN_SET);
	 }
	}
   HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_SET);
 	HAL_GPIO_WritePin(GPIOD,GPIO_PIN_2,GPIO_PIN_RESET);
}
void LED_On(uint8_t num)
  {
	led_state|=1<<(8+(num-1));
	LED_Ctl(led_state);
	}
	void LED_Off(uint8_t num)
  {
	led_state&=~(1<<(num-1));
		LED_Ctl(led_state);
	}
	void LED_Toggle(uint8_t num)
 {
 led_state^=1<<(num-1);
 LED_Ctl(led_state);
 }
		