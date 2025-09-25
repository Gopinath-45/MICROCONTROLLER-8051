#include<reg51.h>
sbit led1=P3^0;
sbit led2=P3^1;
sbit led3=P3^2;
sbit led4=P3^3;
sbit led5=P3^4;
sbit led6=P3^5;
sbit led7=P3^6;
sbit led8=P3^7;
sbit led9=P2^0;
void delay()
{
	unsigned int i;
	for(i=0;i<1000;i++){
	}
}
void main()
{
	led1=led2=led3=led4=led5=led6=led7=led8=led9=0;
	while(1)
	{
		
		led1=1;
		delay();
		led1=0;
		led2=1;
		delay();
		led2=0;
		led3=1;
		delay();
		led3=0;
		led4=1;
		delay();
		led4=0;
		led5=1;
		delay();
		led5=0;
		led6=1;
		delay();
		led6=0;
		led7=1;
		delay();
		led7=0;
		led8=1;
		delay();
		led8=0;
		led9=1;
		delay();
		led9=0;
	}
}
 
 
	