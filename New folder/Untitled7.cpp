#include<stdio.h>
void prime(int a);
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	prime(n);	
}
void prime(int a)
{
	int b,c,d;
	c=0;
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		{
			printf("not prime");
			c=1;
			break;
		}
	}
	if(c==0)
	{
		printf("prime");
	}
}

