#include<stdio.h>
struct employee1{
    int id;
    int exper;
    int salary;
};
struct employee2{
    unsigned int id:8;
    unsigned int exper:4;
    unsigned int salary:20;
};
int main(){
struct employee1 e1;
struct employee2 e2;

printf("Size of the employee1 is : %lu bytes",sizeof(e1));
printf("\nSize of the employee2 is : %lu bytes",sizeof(e2));

e2.id=101;
e2.exper=5;
e2.salary=25000;
printf("\nEmp id : %d",e2.id);
printf("\nEmp exper : %d",e2.exper);
printf("\nEmp salary : %d",e2.salary);
return 0;

}