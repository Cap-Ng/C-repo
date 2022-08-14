#include<stdio.h>
main()
{
	char a[100];
	printf("enter your name\n");
	scanf("%[^\n]",a);
	int i=0,b=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		{
			i++;
			continue;
		}
	i++;
	b++;
	}
	printf("%d\n",b);
}
