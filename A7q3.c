/*3. Write a program to check whether a given number is there in the Fibonacci
series or not.*/
#include"stdio.h"
int main()
{
int i,a=1,b=0,num,c;
printf("Enter a number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
 {
    c=a+b;
    b=a;
    a=c;
 if(num==c)
  {
   printf("%d is a Fabonnaci series ",num);
   break;
  }
 }
 if(num!=c)
 printf("%d is a Not fabonnaci series",num);
    return 0;
}