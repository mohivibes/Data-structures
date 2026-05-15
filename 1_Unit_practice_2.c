/* copy one structure variable to another structure of the same type*/
#include<stdio.h>
struct book{
    int id;
    float price;
};
int main()
{
 struct book b1={32,350};
 struct book b2;
b2=b1;
printf("Book id: %d\nBook price: %.2f",b2.id,b2.price);
return 0;

}
