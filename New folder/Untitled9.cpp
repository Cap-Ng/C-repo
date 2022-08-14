#include<stdio.h>
int fact(int n);
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	fact(n);
	printf("%d==",fact(n));
}
int fact(int n)
{
	int a,b,c,p;
	for(a=1;a<=n;a++)
	{
		n=n*a;
	}
	p=n;
	return p;
}
