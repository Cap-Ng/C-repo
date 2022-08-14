#include<stdio.h>
#include<conio.h>
#include<string.h>
struct data{
char name[20];
struct DOB{
int year;
int month;
int day;}date;
}d;
main()
{
	   char     * buffer  = NULL;
   size_t     n       = 0;
   //printf("Enter five positive integers: ");
int a,i;
printf("How many users?");
scanf("%d",&a);
getchar();
struct data d[a],*p;
p=d;
for(i=0;i<a;i++)
{
printf("enter the details of user %d\n",i+1);
printf("Name: ");
scanf("%[^\n]",&d[i]);
getchar();
printf("Date of birth(year-month-day): ");
getline(&buffer, &n, stdin);
   sscanf(buffer, "%d%d%d", &d[i].date.year, &d[i].date.month, &d[i].date.day);
//scanf("%d%d%d",&d[i].date.year,&d[i].date.month,&d[i].date.day);
}
for(i=0;i<150;i++){ printf("*");}
printf("\n");
printf("Today is 2021-8-11\n");
for(i=0;i<150;i++){ printf("*");}
printf("\n");
for(i=0;i<a;i++)
printf("%s is %d years old.\n",d[i].name,2021-d[i].date.year);
}
