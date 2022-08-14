#include<stdio.h>
main()
{
	printf("enter a number\n");
	int a;
	int c=0;
	scanf("%d",&a);
	for(int b=2;b<=a/2;b++)
	{
		if(a%b==0)
		{
			printf("not prime\n");
			c=1;
			break;
		}
	}
	if(c==0)
	printf("prime");
}
