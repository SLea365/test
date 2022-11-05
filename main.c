#include "delay.h"
#include "sys.h"
#include "usart.h"


int main(void)
 {		
	u16 times=0;
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(9600);	 //串口初始化为115200
 	while(1)
	{
//			times++;
//			if(times%5000==0)
//			{
//				printf("TEST+OK\r\n");
//			}
		printf("TEST+OK\r\n");
		delay_ms(500);
//版本2
	}	 
 }

