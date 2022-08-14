#include<stdio.h>
int fibo(int c);
main()
{
	int a,b,c=0;
	printf("enter a number");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		printf("%d",fibo(c));
		c++;
	}
}
int fibo(int c)
{
	int d;
	if(c==0)
	return 0;
	if(c==1)
	return 1;
	else
	{
	d=fibo(c-1)+fibo(c-2);
	return d;
	}
}

