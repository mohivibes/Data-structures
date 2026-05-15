#include<stdio.h>
int queue[101];
int front=-1;
int rear=-1;
int size;
void enqueue(int value)
{
	if((front==0 && rear == size-1) || (front==rear + 1))  // rear = 4 // 4 == 4
	{
		printf("Queue is full - overflow");
		return;
	}
    if (front==-1)
    {
        front=rear=0;
    }
    else if(rear==size-1)
    {
        rear=0;
    }
    else{
	rear++;
    }
	queue[rear] = value;
}

void dequeue()
{
	int element;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
    if(front == rear )
    {
        front=rear=-1;
    }
    else if(front==size-1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
    
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty\n");
		return;
	}
	 i = front;
    printf("Queue elements: ");
    while(1)
    {
        printf("%d ", queue[i]);
        if(i == rear)
            break;
        i = (i + 1) % size;
    }
	printf("\n");               
}
int main()
{
    int ch;

    printf("Enter the size of the queue:\n");
    scanf("%d", &size);

    while(1)
    {
        printf("\n1.enqueue\n2.display\n3.dequeue\n");
        scanf("%d", &ch);

        if(ch == 1)
        {
            int value;

            printf("Enter the value to insert:\n");
            scanf("%d", &value);

            enqueue(value);
        }

        else if(ch == 2)
        {
            display();
        }

        else if(ch == 3)
        {
            dequeue();
        }
    }
}