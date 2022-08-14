#include<stdio.h>
main()
{
	char R,Y,B,a;
	printf("enter a letter");
	scanf("%[^\n]",&a);
	switch(a)
	{
		case 'R':
			printf("red");
			break;
		case 'Y':
			printf("yellow");
			break;
		case 'B':
			printf("blue");
			break;
		
	}
}
