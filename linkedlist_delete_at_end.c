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
void delete_at_beg()
{
    if(head == NULL)
    {
        printf("Deletion is not possible\n");
    }
    else
    {
        head = head->next;
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
void insert_at_end()
{
    struct node *newNode=createNode();
    if(head == NULL)
    {
        head = newNode;
    }
    struct node *temp =head;
while(temp->next!= NULL)
{
    temp = temp->next;
}
temp->next = newNode;
}
void delete_at_end()
{
    if(head==NULL)
    {
        printf("Deletion not possible");
    }
    else{
        struct node *temp =head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = NULL;
    }
}
int main()
{
	int ch;
	while(1)
	{
		printf("1.insert at beginning\n2.display\n3.delete at beginning\n4.insert at end\n5.delete at end\n");
		scanf("%d",&ch);
		if(ch == 1)
		{
			insert_at_beg();
		} else if(ch == 2)
		{
			display();
		}else if(ch==3)
        {
            delete_at_beg();
        }
        else if(ch==4)
        {
            insert_at_end();
        }
        else if(ch==5)
        {
            delete_at_end();
        }
	}
}