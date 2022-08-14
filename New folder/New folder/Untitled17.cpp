#include<stdio.h>
int func(int);
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	func(n);
	printf("%d\n",func(n));
}
int func(int n)
{
	if(n==0)
	return 1;
	if(n==1)
	return 2;
	int i=2*func(n-1);
	return i;
}
