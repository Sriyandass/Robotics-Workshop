#include<reg52.h>
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
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
		a=P3&0x03;
		if(a==0x08)
		{
			P2=rev;
			P0=rev;
			delay(30);
			P2=rt;
			P0=rt;
			delay(30);
		}
		if(a==0x02)
		{
			P2=rev;
			P0=rev;
			delay(30);
			P2=lt;
			P0=lt;
			delay(30);
		}
		if(a==0x06)
		{
			P2=lt;
			P0=lt;
			delay(300);
		}
		if (a==0x00)
		{
			P2=st;
		}
	}
}