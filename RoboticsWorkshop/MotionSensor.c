#include<reg52.h>
#include<stdio.h>


#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;

unsigned int a;

void main()
{
	while(1)
	{
		a=P1&0x0f;
		if(a==0x0d) 
			P2=st;
		if(a==0x01) 
			P2=rev;
		if(a==0x05) 
			P2=stop;
		if(a==0x07) 
			P2=lt;
		if(a==0x04) 
			P2=rt;
	}
}