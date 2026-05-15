#include<stdio.h>
#include<string.h>
struct student {
	int rollno;
	char name[50];
	float marks;
};
void displaydetails(struct student *s){
	printf("\nDisplay student details: ");
	printf("\nRoll no : %d",s->rollno);
	printf("\nName : %s",s->name);
	printf("\nMarks : %f",s->marks);
}

//pass by value
void checkresult(struct student *s){
	if(s->marks>35)
	{
		printf("\n Pass");
	}

	else
	{
		printf("\n Fail");
	}
}
void addmarks(struct student *s)
{
	s->marks=45;
}
	int main()
	{
		struct student s1={10,"student1",66};
		struct student s2={20,"student2",22};
		displaydetails(&s1);
		checkresult(&s1);
		
		displaydetails(&s2);
		checkresult(&s2);
		addmarks(&s2);
		displaydetails(&s2);
		checkresult(&s2);
		
		
	return 0;	
	}
