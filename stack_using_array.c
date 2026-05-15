#include<stdio.h>
int stack[1000];
int top=-1;
int size;
void push(int value)
{
    if(top == size-1)
    {
        printf("stack is full -> overflow");
        return;
    }
    else{
        top++;
        stack[top]=value;
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
void pop()
{
    if(top == -1)
    {
        printf("stack is empty-> underflow");
        return;
    }
        int value = stack[top];
        top--;
}
int peek()
{
 return stack[top];
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
    printf("Enter the size of the stack: \n");
    scanf("%d",&size);
    while(1)
    {
        printf("\n1.push\n2.display\n3.pop\n4.peek\n5.is full\n6.is empty\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            int value;
            printf("Enter the value to insert: \n");
            scanf("%d",&value);
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
            int x=peek();
            printf("Top most element in stack is %d \n",x);
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
