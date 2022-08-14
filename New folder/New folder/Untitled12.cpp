#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("enter a number");
	scanf("%d",&a);
	int d=a;
	for(;a>0;)
	{
	b=a%10;
	c=c+b*b*b;
	a=a/10;
	}
	if(c==d)
	printf("armstrong\n");
	else
	printf("not armstrong");
}
