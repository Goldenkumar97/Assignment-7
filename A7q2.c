// 2.WAP to print first n term of Fibonnaci series.
#include"stdio.h"
int main()
{
	int a=1,b=0,c,i,num;
	printf("Enter a number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
	printf("%d",c);
	}
	
	return 0;
}