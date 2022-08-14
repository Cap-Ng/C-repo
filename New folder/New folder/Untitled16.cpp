#include<stdio.h>
int gcd(int a,int b)
{
	int c;
	for(int i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0) 
		c=i;
	}
	printf("gcd is %d",c);
}
main()
{
	printf("enter two numbers\n");
	int a,b;
	scanf("%d%d",&a,&b);
	gcd(a,b);
}
