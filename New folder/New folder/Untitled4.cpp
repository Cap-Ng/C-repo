#include<stdio.h>
main()
{
	printf("enter 1 for even, odd 2 for largest\n");
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
			int b;
			printf("enter a number\n");
			scanf("%d",&b);
			if(b%2==0)
			{
				printf("odd");
			}
			else
			{
				printf("even");
			}
			break;
		case 2:
			int c[3];
			printf("enter 3 numbers");
			for(int i=0;i<3;i++)
			{
				scanf("%d",&c[i]);
			}
			int d=(c[0]>c[1]&&c[0]>c[2])?c[0]:(c[1]>c[2]&&c[1]>c[0])?c[1]:c[2];
			printf("largest is %d\n",d);
	}
}
