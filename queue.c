#include<stdio.h>
int queue[101];
int front=-1;
int rear=-1;
int size;
void enqueue(int value)
{
	if(rear == size-1)  // rear = 4 // 4 == 4
	{
		printf("Queue is full - overflow");
		return;
	}
	rear++; //rear = 0
	queue[rear] = value;
	if(front == -1)
	{
		front =0;
	}
}
void dequeue()
{
	int element;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	element = queue[front];
	front++;
	if(front > rear)
	{
		front=rear=-1;
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
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
	printf("\n");
}


int peek()
{
    if(front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front];
}

int is_full()
{
    if(rear == size - 1 && front==0)
        return 1;   
    else
        return 0;   
}

int is_empty()
{
    if(front == -1)
        return 1;  
    else
        return 0;   
}

int main()
{
    int ch;

    printf("Enter the size of the queue:\n");
    scanf("%d", &size);

    while(1)
    {
        printf("\n1.enqueue\n2.display\n3.dequeue\n4.peek\n5.is full\n6.is empty\n");
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

        else if(ch == 4)
        {
            int x = peek();

            if(x != -1)
                printf("Front element in Queue is %d\n", x);
        }

        else if(ch == 5)
        {
            if(is_full())
                printf("Queue is full\n");
            else
                printf("Queue is not full\n");
        }

        else if(ch == 6)
        {
            if(is_empty())
                printf("Queue is empty\n");
            else
                printf("Queue is not empty\n");
        }
    }
}