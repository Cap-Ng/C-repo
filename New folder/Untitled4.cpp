#include<stdio.h>
int prime()
{
	int a,b,c,d,e;
	printf("enter a number");
	scanf("%d",&a);
	b=0;
	for(c=2;c<a;c++)
	{
		if(a%c==0)
		{
			printf("not prime");
			b=1;
			break;
		}
	}
	if(b==0)
	{
		printf("prime");
	}
}
main()
{
	prime();
}
