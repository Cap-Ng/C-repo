#include<stdio.h>
main()
{
	printf("enter a number\n");
	int a,b=0;
	scanf("%d",&a);
	int c=a;
	for(int i=1;i<=a/2;i++)
	{
		if(a%i==0)
		{
			b=b+i;
		}
	}
	if(b==c)
	printf("perfect");
	else
	printf("not perfect");
}
