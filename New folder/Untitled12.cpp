#include<stdio.h>
int factorial(int f)
{
	int a=1,b;
	for(b=1;b<=f;b++)
	{
		a=a*b;
	}
	return a;
}
void prime(int p)
{
	int a,b=0,c;
	for(a=2;a<p;a++)
	{
		if(p%a==0)
		{
		printf("not prime");
		b=1;
		break;
		}
	}
	if(b==0)
	printf("prime");
}
int main()
{
	printf("enter a number");
	scanf("%d",&n);
	factorial(n);
	printf("factorial is %d",factorial(n));
	p=factorial(n);
	prime(p);
}
