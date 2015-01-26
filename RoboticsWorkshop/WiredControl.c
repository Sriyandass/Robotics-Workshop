#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;

unsigned int a,i,j,k=0,reval=0;

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
		a=P0&0x0f;
		if(a==0x02)
		{
			k=0;
			reval=0;
			P2=st;
		}
		if(a==0x04)
		{
			k=0;
			reval=0;
			P2=lt;
		}
		if(a==0x06)
		{
			k=0;
			reval=0;
			P2=rt;
		}
		if(a==0x08)
		{
			k=0;
			reval=0;
			P2=rev;
		}
		if(a==0x05)
		{
			k=0;
			reval=0;
			P2=stop;
		}
		if(a==0x01&(k==0||reval==1))
		{
			P2=lt;
			delay(100);
			k=reval=1;
		}
		if(a==0x03&(k==0||reval==1))
		{
			P2=rt;
			delay(100);
			k=reval=1;
		}
		if(k==1)
		{
			P2=st;
		}
	}
}
