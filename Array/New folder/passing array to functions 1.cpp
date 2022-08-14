#include<stdio.h>
struct data1 {
	int a;
	int data1;
	char c[5];
	
};
struct data1 var;
struct data2{
	int p;
	int q;
	int var;
}var1;
main()
{
	var.c[1]={'a'};
	//printf("%d %s",var.a,var.c);
	printf("%s",var.c);
}
