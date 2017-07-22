#include<stdio.h>
void main()
{
int e,b,i;
long long power;
printf("enter the exponent");
scanf("%d",&e);
printf("enter the number");
scanf("%d",&b);
for(i=1;i<=e;i++)
{
power=power*b;
}
printf("%d^%d=%lld",b,e,power);
}
