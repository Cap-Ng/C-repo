#include<stdio.h>
main()
{
int a,b,c;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);

if(a>b&&a>c)
printf("%d is greater\n",a);
else
goto b;

b:
	if(b>a&&b>c)
	printf("%d is greatest",b);
	else
	goto c;
	
c:
	if(c>a&&c>b)
	printf("%d is greatest ",c);

}
