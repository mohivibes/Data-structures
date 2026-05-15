#include<stdio.h>
int queue[30];
int front=-1;
int rear=-1;
int size;
void insert_from_rear(int value)
{
    if((front==0 && rear==size-1) || (front==rear+1))
    {
        printf("deque overflow\n");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else if(rear==size-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=value;
}
void insert_from_front(int value)
{
    if((front==0 && rear==size-1) || (front==rear+1))
    {
        printf("deque overflow\n");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else if(front==0)
    {
        front=size-1;
    }
    else
    {
        front--;
    }
    queue[front]=value;
}
void delete_from_front()
{
    if(front==-1)
    {
        printf("deque is empty\n");
        return;
    }
    printf("deleted: %d\n",queue[front]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==size-1)
    {
        front=0;
    }
    else
    {
        front++;
    }
}
void delete_from_rear()
{
    if(rear==-1)
    {
        printf("deque is empty\n");
        return;
    }
    printf("deleted: %d\n",queue[rear]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    {
        rear=size-1;
    }
    else
    {
        rear--;
    }
}
void display()
{
    if(front==-1)
    {
        printf("deque is empty\n");
        return;
    }
    int i=front;
    while(1)
    {
        printf("%d ",queue[i]);

        if(i==rear)
            break;

        i=(i+1)%size;
    }
    printf("\n");
}
int main()
{
    printf("enter size:\n");
    scanf("%d",&size);
    int ch,value;
    while(1)
    {
        printf("\n1.insert_rear 2.insert_front 3.delete_front 4.delete_rear\n");
        printf("5.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                scanf("%d",&value);
                insert_from_rear(value);
                break;
            case 2:
                scanf("%d",&value);
                insert_from_front(value);
                break;
            case 3:
                delete_from_front();
                break;
            case 4:
                delete_from_rear();
                break;
            case 5:
                display();
                break;
        }
    }
}