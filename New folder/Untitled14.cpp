#include<stdio.h>
main()
{
	int n,b,d,a,c=0;
	printf("enter a number");
	scanf("%d",&n);
	b=n;
	while(n!=0)
	{
		a=n%10;
		c=c+a;
		n=n/10;
	}
	d=c*c*c;
	if(d==b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
