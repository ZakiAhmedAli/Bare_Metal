#ifndef UART_H
#define UART_H

#define UART0DR  *((volatile unsigned int *)((unsigned int*)0x101F1000))

void UART_VoidSendString(unsigned char *Ptr_TXString);




#endif