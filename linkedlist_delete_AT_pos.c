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


void insert_at_pos(int pos,int value)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->next = NULL;

    if(pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct node *temp = head;

    int i;
    for(i=0;i<pos-1;i++)
    {
        temp = temp->next;

        if(temp == NULL)
        {
            printf("Invalid Position\n");
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void delete_at_pos(int pos)
{
    struct node *temp = head;
    if(head == NULL)
    { 
        printf("Deletion not possible");
        return;
    }
    if (pos==0)
    {
        head = head->next;
    }
    int i;
    for(i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    struct node *deleteNode = temp->next;
    temp->next = deleteNode->next;
}

int main()
{
    int ch;

    while(1)
    {
       printf("1.insert at beginning\n2.display\n3.delete at beginning\n4.insert at end\n5.delete at end\n6.insert at position\n7.delete at position\n");
        
        scanf("%d",&ch);

        if(ch == 1)
        {
            insert_at_beg();
        }
        else if(ch == 2)
        {
            display();
        }
        else if(ch == 3)
        {
            delete_at_beg();
        }
        else if(ch == 4)
        {
            insert_at_end();
        }
        else if(ch == 5)
        {
            delete_at_end();
        }
        else if(ch == 6)
        {
            int pos,value;

            printf("Enter position: ");
            scanf("%d",&pos);

            printf("Enter value: ");
            scanf("%d",&value);

            insert_at_pos(pos,value);
        }
        else if(ch==7)
        {
            int pos;
            printf("Enter position: ");
            scanf("%d",&pos);
            delete_at_pos(pos);
        }
    }
    return 0;
}