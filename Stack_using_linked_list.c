#include<stdio.h>
#include<stdlib.h>
int stack[1000];
int top=-1;
int size;
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
void push(int value)
{ 
    if(top==size-1)
    {
        printf("Stack is Full\n");
        return;
    }
	struct node *newNode = createNode();
	if(head == NULL)
	{
		head = newNode;
	} else {
		newNode->next = head;
		head = newNode;
	}top++;
}
void pop()
{
    if(head == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        head = head->next;
    }top--;
}
void display()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("stack is Empty");
	} 
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void peek()
{
 printf("%d", head->data);
 return;
}
int is_full()
{
    if(top == size - 1)
        return 1;   
    else
        return 0;   
}

int is_empty()
{
    if(top == -1)
        return 1;  
    else
        return 0;   
}
int main()
{
    int ch;
    printf("Enter the size of the stack: ");
    scanf("%d",&size);
    while(1)
    {
        printf("\n1.push\n2.display\n3.pop\n4.peek\n5.is full\n6.is empty\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            int value;
            printf("Enter the value to insert: \n");
            push(value);
        }
        else if(ch==2)
        {
            display();

        }
        else if(ch==3)
        {
            pop();
        }
        else if(ch==4)
        {
            peek(); 
        }
             else if(ch==5)
        {
            int a=is_full();
            if(a==1)
            {
                printf("Stack is full\n");
            }
            else{
                printf("Stack is not full\n");
            }
        }
        else if(ch==6)
        {
           int b=is_empty();
           if(b==1)
           {
            printf("Stack is empty\n");
           }
           else
           {
            printf("Stack is not empty\n");
           }
        }
    }
}
