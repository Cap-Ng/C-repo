#include<stdio.h>
main()
{
	printf("enter 10 numbers");
	int a[10],c=0,i,j;;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]=a[j])
			int c=1;
			break;
		}
	}
	if(c==0)
	printf("multiple elements exist");
	if(c==1)
	printf("multiple elements do not exist");
}
