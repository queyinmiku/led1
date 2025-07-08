#include "bsp_key.h"
uint8_t KEY_Scan()
 {
  if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_0)==GPIO_PIN_RESET)
  {
	HAL_Delay(10);
		if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_0)==GPIO_PIN_RESET)
   {
	 return 1;
	 }
	
	}
 if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_1)==GPIO_PIN_RESET)
  {
	HAL_Delay(10);
		if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_1)==GPIO_PIN_RESET)
   {
	 return 2;
	 }
	
	}
	if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2)==GPIO_PIN_RESET)
  {
	HAL_Delay(10);
		if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2)==GPIO_PIN_RESET)
   {
	 return 3;
	 }
	
	}
	if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_3)==GPIO_PIN_RESET)
  {
	HAL_Delay(10);
		if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_3)==GPIO_PIN_RESET)
   {
	 return 4;
	 }
	
	}
 return 0;
 
 }
	 