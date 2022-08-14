#include<stdio.h>
main()
{
	int a,b=1,c,i;
	printf("enter a number\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%d\n",b);
}
