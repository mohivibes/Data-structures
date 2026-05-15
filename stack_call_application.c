#include<stdio.h>
void new1();
void new2();
void new3();
void new1()
{
    printf("new1 is started\n");
    new2();
    printf("new1 is ended\n");
}
void new2()
{
    printf("new2 is started\n");
    new3();
    printf("new2 is ended\n");
}
void new3()
{
    printf("new3 is started\n");
    printf("new3 is ended\n");
}

int main()
{
printf("Main is started\n");
new1();
printf("Main is ended\n");
return 0;
}