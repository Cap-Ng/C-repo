#include<stdio.h>
main()
{
	char a[30];
	int b=0,c=0;
	printf("enter your name");
scanf("%s",a);
	while(a[b]!='\0')
	{
		
			if(a[b]==' ')
			{
			b++;
			continue;
			}
		
		b++;
		c++;
	}printf("%d",c);
}
