#include<stdio.h>
main()
{
	int a=0,b=1,c,i=0,e;
	printf("enter a number\n");
	scanf("%d",&e);
	do
	{
		printf("%d\n",a);
		c=b+a;
		a=b;
		b=c;
		i++;
	}while(i<e);
}
