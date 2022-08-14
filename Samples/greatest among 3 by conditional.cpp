#include<stdio.h>
main()
{
	float a,b,c,d,e;
	printf("enter four numbers\n");
	scanf("%f%f%f%f",&a,&b,&c,&e);
	d=(a>b&&a>c&&a>e)? a: (b>a&&b>c&&b>e)? b: (c>a&&c>b&&c>e)? c: e;
	printf("greatest is\n %0.1f",d);
	
}
