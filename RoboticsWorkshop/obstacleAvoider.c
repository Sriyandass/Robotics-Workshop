#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define rev 0x05;

unsigned int a,i,j;

void delay(unsigned int t)
{
	for(i=0; i<t; i++)
	{
		for(j=0; j<1275; j++);
	}
}

void main()
{
	while(1)
	{
		a = P1 & 0x03;
		
		if(a == 0x02)
		{
			P2 = rev;
			delay(150);
			P2 = rt;
			delay(100);
		}

		if(a == 0x01)
		{
			P2 = rev;
			delay(150);
			P2 = lt;
			delay(100);
		}

		if(a == 0x03)
		{
			P2 = rev;
			delay(150);
			P2 = lt;
			delay(100);
		}

		if(a == 0x00)
		{
			P2 = st;
		}
	}
}

			

		

		