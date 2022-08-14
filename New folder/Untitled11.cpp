#include<stdio.h>
main()
{
	int a,b=1,i=1,c,d,e;
	printf("enter a number");
	scanf("%d",&a);
	while(i<=a)
	{
		b=b*i;
		i++;
	}
	printf("%d",b);
}
