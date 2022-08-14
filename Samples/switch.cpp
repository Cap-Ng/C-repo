#include<stdio.h>
main()
{
	int a,d;
	printf("enter your marks");
	scanf("%d",&a);
	d=a;
	printf("d is %d",d);

	int e=d/10;
	switch(e)
	{
		case 10:
		case 9:
		case 8:
		printf("you got A+");
		break;
		case 7:
		case 6:
		printf("you got A");
		break;
		default:
		printf("you got B");
	}
	
}
