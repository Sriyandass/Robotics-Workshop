#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;
unsigned int a,i,j;
void delay(unsigned int t)
{
	for(i=0;i<t;i++)
	for(j=0;j<1275;j++); //Oscillator takes 1ms to execute
}
void main()
{
	while(1)
	{
		a=P0&0x0f;
		if(a==0x05)
		{
			P2=rev;
		}
		else if(a==0x06)
		{
			P2=lt;
 		}
		else if(a==0x09)sri
		{
			P2=rt;
		}
		else if (a==0x0f)
		{
			P2=st;
		}
		else P2=stop;
	}
}