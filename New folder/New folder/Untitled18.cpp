#include<stdio.h>
main()
{
	int a[5]={5,9,11,5,3};
	int i,j,b=0;
	for(i=0;i<5;i++)
	for(j=i+1;j<5;j++)
	{
		if(a[i]==a[j]){
		printf("matching elements exist\n");
		b=1;
		break;
		}
	}
	if(b==0)
	printf("no matching elements");
}
