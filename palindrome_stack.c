#include<stdio.h>
#include<string.h>
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
int palindrome(char str[])
{
    int i;
    char ch;
    int len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        push(str[i]);
    }
    if(len%2!=0)
    {
        i++;
    }
    for(; str[i] != '\0'; i++)
    {
        ch = pop();
    if(str[i] != ch)
    {
        return 0; // Not palindrome
    }
     return 1; 
    }
}
int main()
{
    char str[size];
    printf("Enter the string: \n");
    scanf("%s",str);
    int res=palindrome(str);
    if(res==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}
