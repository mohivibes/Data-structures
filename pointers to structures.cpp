#include<stdio.h>
struct employee
{
	int empid;
	char name[50];
	float salary;
	
};
int main()
{
	struct employee e1={1,"john",30000};
	struct employee *ptr = &e1;
	
	printf("%d ",e1.empid);
	printf("\n%s",e1.name);
	printf("\n%.2f ",e1.salary);
	
    printf("%d ",ptr->empid);
	printf("\n%s",ptr->name);
	printf("\n%.2f ",ptr->salary);
	
	//update value using pointer
	ptr->salary = 50000;
	printf("%d ",e1.empid);
	printf("\n%s",e1.name);
	printf("\n%.2f ",e1.salary);
	
	return 0;
	
}
