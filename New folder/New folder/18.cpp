#include<stdio.h>
int func(int [],int);
main()
{
	int a;
	printf("enter size of array\n");
	scanf("%d",&a);
	int b[a];
	for(int i=0;i<a;i++)
	scanf("%d",&b[i]);
	func(b,a);
}
int func(int b[],int a)
{
	int temp,j;
	for(int i=a-1;i>=0;i--)
	{
	printf("\n%d\n",b[i]);		
	}	
}
