//10. Write a program to print all Armstrong numbers under 1000.
#include"stdio.h"
int main()
{
int n,x,r,s;
 for(n=1;n<=1000;n++)
 {
    s=0;
    x=n;
    while(x!=0)
    {
        r=x%10;
        s=(r*r*r)+s;
        x=x/10;
    }
    if(s==n)
    printf(" %d ",n);
 }

    return 0;
}