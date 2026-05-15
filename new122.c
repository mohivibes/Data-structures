#include <stdio.h>
#include <ctype.h>
int stack[100];
int top = -1;
void push(int value) {
    stack[++top] = value;
}
int pop() {
    return stack[top--];
}
int main() {
    char exp[100];
    int i = 0;
    printf("Enter postfix expression: ");
    scanf("%s", exp);
    while(exp[i] != '\0') {
        if(isdigit(exp[i])) {
            push(exp[i] - '0');
        }
        else {
            int val2 = pop();
            int val1 = pop();
            switch(exp[i]) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        }
        i++;
    }
    printf("Result = %d", pop());
    return 0;
}