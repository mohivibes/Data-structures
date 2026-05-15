#include<stdio.h>
struct bank
{
	int accno;
	char name;
	float balance;
};
void display(struct bank b){
	printf("Enter acc number : ");
	scanf("%d",&b.accno);
	printf("Enter name : ");
	scanf("%s",b.name);
	printf("Enter balance : ");
	scanf("%.2f",&b.balance);
}
int main()
{
	struct bank b1;
	display(b1);
	
	return 0;
}
