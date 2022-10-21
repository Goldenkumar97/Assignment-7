// 1 WAP to find the N th term of the Fibonnaci series.
#include"stdio.h"
int main()
{
 int a=1,b=0,c,i,num;
 printf("Enter a number ");
 scanf("%d",&num);
 for(i=1;i<num;i++)
 {
    c=a+b;
    b=a;
    a=c; 
 }
 printf("fibonnaci series of %d th step is =%d",num,c);

    return 0;
}