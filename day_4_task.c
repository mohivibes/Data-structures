#include<stdio.h>
typedef struct {
    int id;
    float price;
}product;

int main()
{
    product p1;
   p1.id=101;
   p1.price=76.08;
    printf("Book id : %d\n",p1.id);
    printf("Book price : %.2f",p1.price);
    return 0;

}