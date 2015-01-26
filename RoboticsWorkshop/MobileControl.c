#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;

unsigned int a,i,j,k=0;

void delay(unsigned int t)
{
	for(i=0; i<t; i++)
	{
		for(j=0; j<1275; j++);
	}
}

unsigned int a;
void main()
{
	while(1)
	{
		a=P0&0x0f;
		if(a==0x02)
		{
			P2=st;
			delay(600);
			P2=rt;
			delay(300);
			P2=st;
			delay(1300);
			P2=lt;
			delay(300);
			P2=st;
			delay(600);
			P2=stop;
		}
	}
}