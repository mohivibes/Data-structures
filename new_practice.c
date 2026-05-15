#include <stdbool.h>
#define size 1000
int top = -1;
char stack[size];
void push(char ch)
{
    top++;
    stack[top] = ch;
}
char pop()
{
    if(top == -1)
        return '#';   // stack empty
    return stack[top--];
}
bool isValid(char* s)
{
    top = -1;   // reset stack
    
    int i;
    char ch;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            push(s[i]);
        }
        else
        {
            ch = pop();

            if(s[i] == '}' && ch != '{')
                return false;

            if(s[i] == ']' && ch != '[')
                return false;

            if(s[i] == ')' && ch != '(')
                return false;
        }
    }

    if(top == -1)
        return true;
    else
        return false;
}
