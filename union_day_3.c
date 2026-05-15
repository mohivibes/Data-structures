#include<stdio.h>
union data{
    int i;
    float f;
    char c;
};
int main()
{
    union data d;
    printf("Size of union %lu bytes",sizeof(d));
    d.i=10;
    printf("\nAfter assign data in i:\n");
    printf("%d\n",d.i);
    printf("%f\n",d.f);
    printf("%c\n",d.c);
    d.f=17.88;
     printf("\nAfter assign data in f:\n");
    printf("%d\n",d.i);
    printf("%f\n",d.f);
    printf("%c\n",d.c);
    d.c='A';
     printf("\nAfter assign data in c:\n");
    printf("%d\n",d.i);
    printf("%f\n",d.f);
    printf("%c\n",d.c);

    return 0;
}