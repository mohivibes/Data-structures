#include<stdio.h>

struct employee
{
    int empid;
    char name[50];
    float salary;
};

int main()
{
    struct employee e1;

    // create a pointer
    struct employee *ptr = &e1;

    printf("Enter employee id : ");
    scanf("%d", &e1.empid);

    printf("Enter employee name : ");
    scanf("%s", e1.name);

    printf("Enter salary : ");
    scanf("%f", &e1.salary);

    printf("\nDisplay details using variable:\n");
    printf("Employee id : %d\n", e1.empid);
    printf("Employee name : %s\n", e1.name);
    printf("Salary : %.2f\n", e1.salary);

    printf("\nDisplay details using pointers:\n");
    printf("Employee id : %d\n", ptr->empid);
    printf("Employee name : %s\n", ptr->name);
    printf("Employee salary : %.2f\n", ptr->salary);

    return 0;
}

