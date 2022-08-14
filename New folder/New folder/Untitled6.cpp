#include<stdio.h>
main()
{
	printf("enter a number");
	int a;
	scanf("%d",&a);
	int b=1;
	while(b<=100)
	{
		if(b%a==0)
		{
			printf("%d\n",b);
			}
	b++;	
	}
}
