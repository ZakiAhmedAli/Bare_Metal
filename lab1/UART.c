#include"UART.h"



void UART_VoidSendString(unsigned char *Ptr_TXString)
{
	/*loop until end string*/
	while( *Ptr_TXString != '\0' )
	{
		/*transmit string*/
		UART0DR = (unsigned int)(*Ptr_TXString);
		/*Next char*/
		Ptr_TXString++;
	}
}