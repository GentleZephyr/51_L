#include "pause.h"
void Delay1ms(void)	//@12.000MHz
{
	unsigned char i, j;

	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
}

void Delay300us(void)   //@12.000MHz
{
    unsigned char i;
    i = 60;             // 约 300us
    while (--i);
}




void delay(unsigned char time)
{
    while(time--)
    {
        Delay300us();
    }
}