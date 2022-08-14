#include<stdio.h>
main()
{
	printf("enter a number\n");
	int a;
	scanf("%d",&a);
	int i,b=1;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			b=2;
			break;
		}
	}
	if(b==1)
	printf("prime\n");
	if(b==2)
	printf("not prime");
}
