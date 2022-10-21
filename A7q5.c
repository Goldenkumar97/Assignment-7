/* 5.Write a program to check wheteher two given numbers
are co-prime or not.*/
#include"stdio.h"
int main()
{
int x,y,i,hcf;
printf("Enter two numbers ");
scanf("%d%d",&x,&y);
for(i=1;i<x*y;i++)
{
   if((x%i==0) && (y%i==0))
   hcf=i;
}
if(hcf==1)
printf("%d and %d is co-prime number ",x,y);
else
printf("%d and %d is not co-prime  number ",x,y);

   return 0;
}