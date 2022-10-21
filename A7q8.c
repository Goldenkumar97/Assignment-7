//8.WAP to find next prime numbers of a given number.
#include"stdio.h"
int main()
{
int n,i,j;
printf("Enter a number ");
scanf("%d",&n);
for(i=n+1; ;i++)
{
    for(j=2;j<i;j++)
    {
    if(i%j==0)
    break;
    }
if(i==j)
break;
}
printf("next prime number  is %d",i); 
return 0;

}