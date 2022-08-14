#include<stdio.h>
int func(int [],int);
main()
{
	printf("enter size of array\n");
	int i,b;
	scanf("%d",&b);
	int a[b];
	printf("enter array elements\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	func(a,b);
}
func(int a[],int b)
{
	int *p,i,j;
	p=a;
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i;j++)
		{
				if(*(p)>*(p+1))
		{
			j=*p;
			*p=*(p+1);
			*(p+1)=j;
		}	
		}
	
	}
	for(i=0;i<b;i++)
		printf("%d\n",a[i]);
}
