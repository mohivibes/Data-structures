#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node* createNode()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
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
        newNode->next = newNode;
        return;
    }
    else
    {
        struct node *temp=head;
        while(temp->next !=head)
        {
            temp=temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head= newNode;
    }
}
void insert_at_end()
{
    struct node *newNode = createNode();
    if(head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    else
    {
        struct node *temp=head;
        while(temp->next !=head)
        {
            temp=temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

 void display()
 {
   if(head ==NULL)
   {
    printf("List is Empty!\n");
    return;
   }
   struct node *temp=head;
   do 
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }while(temp!=head);
   printf("\n");
 }
 void delete_at_beg()
 {
  if(head==NULL)
  {
    printf("Deletion is not posssible\n");
    return;
  }
   else if(head->next== head)
   {
    head = NULL;
   }
    else
    {
        struct node *temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        head = head->next;
    }
 }
 void delete_at_end()
 {
   if(head==NULL)
   {
    printf("Deletion is not possible\n");
    return;
   }
   else if(head->next == head)
   {
    head = NULL;
   }
   else{
    struct node *temp = head;
    while(temp->next->next != head)
    {
        temp = temp->next;
    }
    temp->next = head;
   }
 }
 
int main()
{
    int ch;
    while(1)
    {
        printf("1.insert at beginning\n2.Display\n3.insert at end\n4.delete at begin\n5.delete at end\n");
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
            insert_at_end();
        }
        else if(ch==4)
        {
            delete_at_beg();
        }
        else if(ch == 5)
        {
            delete_at_end();
        }
    }
}