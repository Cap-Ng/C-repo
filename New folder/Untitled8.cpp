#include<stdio.h>
main()
{
	float n,c=0,i,d;
	printf("enter a number");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		c=c+i;
	}
	d=c/n;
	printf("average is %0.1f",d);
}
