#include "bsp_led.h"

void LED_On(uint8_t num)
{
	uint16_t pin_num;
	pin_num=1<<(8+(num-1));
	HAL_GPIO_WritePin(GPIOC,pin_num,GPIO_PIN_RESET);
}
void LED_Off(uint8_t num)
{
	uint16_t pin_num;
	pin_num=1<<(8+(num-1));
	HAL_GPIO_WritePin(GPIOC,pin_num,GPIO_PIN_SET);
}
void LED_Toggle(uint8_t num)
{
	uint16_t pin_num;
	pin_num=1<<(8+(num-1));
	HAL_GPIO_TogglePin(GPIOC,pin_num);
}