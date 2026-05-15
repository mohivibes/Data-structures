#include<stdio.h>
#define size 30
int top = -1;
char stack[size];
void push(char ch)
{
top++;
stack[top] = ch;
}
char pop()
{
    int ch = stack[top];
    top--;
    return ch;
}
int matching(char str[])
{
    int i;
    char ch;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            push(str[i]);
        }
        else{
            if(str[i] == '}')
            {
                ch = pop();
                if(ch != '{')
                {
                    return 0;
                }
            }
             if(str[i] == ']')
            {
                ch = pop();
                if(ch != '[')
                {
                    return 0;
                }
            }
             if(str[i] == ')')
            {
                ch = pop();
                if(ch != '(')
                {
                    return 0;
                }
            }
            
        }
    }

if(top==-1)
    {
        return 1;
    }
}
int main()
{
  char str[size];
    printf("Enter the string: \n");
    scanf("%s",str);
    int res=matching(str);
    if(res==1)
    {
        printf("Valid parenthesis\n");
    }
    else
    {
        printf("Not valid parenthesis\n");
    }
    return 0;  

}



