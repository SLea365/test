#include "delay.h"
#include "sys.h"
#include "usart.h"


int main(void)
 {		
	u16 times=0;
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 //���ڳ�ʼ��Ϊ115200
 	while(1)
	{
//			times++;
//			if(times%5000==0)
//			{
//				printf("TEST+OK\r\n");
//			}
		printf("TEST+OK\r\n");
		delay_ms(500);
//�汾2
	}	 
 }

