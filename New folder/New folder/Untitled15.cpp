#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("enter a number\n");
	scanf("%d",&a);
	int d=a;
	for(;a>0;)
	{
		b=a%10;
		c=c+b;
		a=a/10;	
	}
	if(c*c*c==d)
	printf("dudeney number\n");
	else
	printf("not dudeney number");
}
