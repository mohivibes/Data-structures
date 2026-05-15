#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[50];
    float percentage;
};
int main()
{
    //method 1
    struct student s1;
   scanf("%d %f %s",&s1.rollno,&s1.percentage,&s1.name);
    printf("%d %f %s",s1.rollno,s1.percentage,s1.name);
    return 0;
}

