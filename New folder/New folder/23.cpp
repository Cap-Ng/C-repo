#include<stdio.h>
main()
{
	int a,b,c,i,j;
	printf("enter the size of matrix\n");
	scanf("%d%d",&a,&b);
	int d[a][b];
	printf("enter %d by %d matrix",a,b);
	for(i=0;i<a;i++)
	for(j=0;j<b;j++){scanf("%d",&d[i][j]);
	//	for(i=0;i<a;i++)
	//for(j=0;j<b;j++)
	d[i][j]=d[i][j]+5;
		
	}
	
	for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	{
	if(i<j)
	{
		c=d[i][j];
		d[i][j]=d[j][i];
		d[j][i]=c;
	}
	printf("%d\n",d[i][j]);
	}
}

