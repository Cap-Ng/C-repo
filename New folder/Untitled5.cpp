#include<stdio.h>
int input()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	return n;
}
main()
{
	int a,b,c;
	a=input();
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
	printf("prime");
}
