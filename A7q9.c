//WAP to program check wheather a given number is an Armstrong number or not 
#include"stdio.h"
int main()
{
int c,num,i,arm=0,r;
printf("Enter a number ");
scanf("%d",&num);
c=num;
while(num>0)
{
    r=num%10;
    arm=(r*r*r)+arm;
    num=num/10;
}
    if(c==arm)
    printf("An Armstromg number ");
    else
    printf("Not Armstrong number ");
    
return 0;
}