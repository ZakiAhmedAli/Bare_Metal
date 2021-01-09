#include"UART.h"

unsigned char Arr_Str[50]="Learn indepth:zaki";

unsigned char const Arr_Str2[50]="zaki";


void main(void)
{
	UART_VoidSendString(Arr_Str);

}