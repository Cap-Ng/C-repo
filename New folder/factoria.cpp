#include<stdio.h>
main()
{
	int a,b=1,c,i;
	printf("enter a number");
	scanf("%d",&a);
	c=a%10;
	for(i=1;i<=c;i++)
	{
		b=b*i;
	}
	printf("%d",b);
}
