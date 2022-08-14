#include<stdio.h>
struct courseRec{
	char subject_code[7];
	char subject_title[30];
	int subject_credit;
	int no_of_students;
}cRec;
main()
{
	printf("enetr subject code\n");
	scanf("%s",cRec.subject_code);
	printf("enter no. of students enrolled\n");
	scanf("%d",&cRec.no_of_students);
	cRec.subject_credit=4;
	printf("enter subject title\n");
	getchar();
	scanf("%[^\n]",cRec.subject_title);
//	gets(cRec.subject_title);
	printf("subject code:%s\t",cRec.subject_code);
	printf("no. of students enrolled:%d\t",cRec.no_of_students);
	printf("subject credit:%d\t",cRec.subject_credit);
	printf("subject title:%s\t",cRec.subject_title);
}
