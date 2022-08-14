#include<stdio.h>
main()
{
	char ch ;
	printf("enter the value of a clolur");
	ch=getchar();	
	switch(ch)
	{
		case 'r':
		printf("Red");
		break;
		case 'y':
		printf("yellow");
		break;
		case 'b':
			printf("blue");
			break;
		default:
			printf("none");
	}
}
