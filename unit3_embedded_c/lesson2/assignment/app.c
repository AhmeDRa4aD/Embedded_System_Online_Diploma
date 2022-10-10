#include "uart.h"
char buffer[100] = "LEARN-IN-DEPTH:RASHAD";

int main(void)
{
	UART0_SEND(buffer);
	
	return 0;
}