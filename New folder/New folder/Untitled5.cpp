#include<stdio.h>
void func(int a);
main()
{
	printf("enter a number\n");
	int a,b;
	scanf("%d",&a);
	func(a);
}
void func(int b)
{
	int i;
	for(i=0;i<=b;i++)
	{
		if(i%7==0)
		{
			if(i%63!=0)
			printf("%d",i);
		}
	}
}
