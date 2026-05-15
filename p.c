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

int main()
{
    int ch;

    printf("Enter the size of the queue:\n");
    scanf("%d", &size);

    while(1)
    {
        printf("\n1.enqueue\n2.display\n3.dequeue\n4.exit\n");
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
            break;
        }

        else
        {
            printf("Invalid choice\n");
        }
    }
}