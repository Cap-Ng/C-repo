#include<stdio.h>
int facto(int f);
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	facto(n);
	printf("f=%d",facto(n));
}
int facto(int f)
{
	int a,b=1,c,d;
	for(a=1;a<=f;a++)
	{
		b=b*a;
	}
	return b;
}
