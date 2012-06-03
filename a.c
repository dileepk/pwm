/* on time high,so brighter*/
#include<msp430.h>
void delay(int n)
{
while(n--);
}

void main()
{
P1DIR=1;
while(1)
{
 P1OUT=1;
 delay(900);
 P1OUT=0;
 delay(100);
}
}
