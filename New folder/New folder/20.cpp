#include<stdio.h>
int arm(int);
main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d",&a);
	arm(a);
	if(arm(a)==a)
	printf("numver is armstrong");
	else
	printf("not armstrong");
}
int arm(int a)
{
	int i,j=0;
	for(;a>0;)
	{
		i=a%10;
		j=j+i*i*i;
		a=a/10;
	}
	return j;
}
