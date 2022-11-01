#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"

uint8_t KeyNum;

int main(void)
{
	Buzzer_Init();
	Sensor_Init();
	while(1)
	{
		if(Sensor_Get() == 1) //获取传感器端口状态，来控制蜂鸣器的状态
		{
			Buzzer_ON();
		}
		else
		{
			Buzzer_OFF();
		}
	}
}
