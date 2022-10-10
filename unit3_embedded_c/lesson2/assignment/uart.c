#include "uart.h"
#define UART0DR *((volatile unsigned char*)((unsigned char*)0x101f1000))
void UART0_SEND(volatile unsigned char* p_str)
{
	while(*p_str != '\0')
	{
		UART0DR = *p_str;
		p_str++;
	}
}