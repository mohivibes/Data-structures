#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode()
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    int data;
    scanf("%d", &data);
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insert_at_beg()
{
    struct node *newNode = createNode();

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void display()
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void insert_at_end()
{
     struct node *newNode = createNode();

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    struct node *temp =head;
    while(temp->next != NULL)
    {
        temp= temp->next;
    }
    temp->next=newNode;
    newNode->prev = temp;

}
void delete_at_beg()
{
    if(head==NULL)
    {
        printf("Deletion is not possible");
    }
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
}
void delete_at_end()
{
   if(head == NULL)
   {
    printf("Deletion is not possible");
    return;
   }
    if(head->next == NULL)
    {
        head = NULL;
        return;
    }
     struct node* temp = head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->prev->next = NULL;
   }

   void delete_at_pos(int pos)
   {
    if(head == NULL)
   {
    printf("Deletion is not possible");
    return;
   }
   if (pos ==0)
   {
    delete_at_beg();
   }
   struct node *temp=head;
   int i;
   for(i=0;i<pos && temp!=NULL;i++)
   {
    temp=temp->next;
   }
   if(temp->next!=NULL)
{
    temp->next->prev=temp->prev;
}
if(temp->prev!=NULL)
{
    temp->prev->next=temp->next;
}

}
void display_reverse()
{
if(head==NULL)
 {
    printf("List is empty\n");
    return;
 }
struct node *temp=head;
while(temp->next!=NULL)
 {
    temp=temp->next;
 }
while(temp!=NULL)
 {
    printf("%d ",temp->data);
    temp=temp->prev;
 }
printf("\n");
}
void reverse()
{
    struct node *curr = head;
    struct node *temp=NULL;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL)
    {
        head = temp->prev;
    }
}
void search(int key)
{
    struct node *temp = head;
    int pos=0;
    while (temp!=NULL)
    {
        if(temp->data == key)
        {
            printf("Element is found at position %d\n",pos);
            return;
        }
        temp= temp->next;
        pos++;
     }
     printf("element is not found\n");
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert at Beginning\n2.Display\n3.insert_at_end\n4.delete_at_beg\n5.delete at end\n6.delete at position\n7.display reverse\n8.reverse\n9.search\n");

        scanf("%d", &ch);
        if(ch == 1)
            insert_at_beg();
        else if(ch == 2)
            display();
        else if(ch == 3)
            insert_at_end();
        else if(ch==4)
            delete_at_beg();
        else if(ch==5)
            delete_at_end();
        else if(ch==6)
        {
         int pos;
         printf("Enter position to delete\n");
         scanf("%d",&pos);
         delete_at_pos(pos);
        }
        else if(ch==7)
        {
            display_reverse();
        }
        else if(ch==8)
        {
            reverse();
        }
        else if(ch==9)
        {
              int key;
            printf("enter key value: ");
            scanf("%d",&key);
            search(key);
        }
    }
}