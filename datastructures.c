
#include<stdio.h>
#include<string.h>
struct date{
	int date;
	int month;
	int year;
};
struct student{
    char name[50];
	int rollno;
	struct date dob;	
};
int main()
{
	struct student s1;
	printf("Enter name : ");
	scanf("%s",s1.name);
	printf("Enter rollno : ");
	scanf("%d",&s1.rollno);
	printf("Enter date of birth : ");
	scanf("%d %d %d",&s1.dob.date,&s1.dob.month,&s1.dob.year);
	
	printf("\nName : %s",s1.name);
	printf("\nRoll no : %d",s1.rollno);
	printf("\nDate of birth : %d/%d/%d",s1.dob.date,s1.dob.month,s1.dob.year);
	
	return 0;
}