#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node* createNode()
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	int data;
	scanf("%d",&data);
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
void insert_at_beg()
{
	struct node *newNode = createNode();
	if(head == NULL)
	{
		head = newNode;
	} else {
		newNode->next = head;
		head = newNode;
	}
}
void display()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("Linkedlist is Empty");
	} 
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("1.insert at beginning\n2.display\n");
		scanf("%d",&ch);
		if(ch == 1)
		{
			insert_at_beg();
		} else if(ch == 2)
		{
			display();
		}
	}
}