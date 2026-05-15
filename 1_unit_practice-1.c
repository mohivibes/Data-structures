/* Write a c program to find total,average of n students using structure*/
#include<stdio.h>
struct student{
char name[20];
int marks;
};
int main()
{
    int n,i,total=0;
    float avg;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student s1[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name and Marks: ");
        scanf("%s %d",s1[i].name,&s1[i].marks);
        total +=s1[i].marks;
    }
    avg = total/(float)n;
    printf("Total Marks: %d",total);
    printf("\nTotal average: %.2f",avg);
    return 0;
    
}