#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	int d=(a>b&&a>c)?a:(b>c&&b>a)?b:c;
	printf("%d",d);
}
