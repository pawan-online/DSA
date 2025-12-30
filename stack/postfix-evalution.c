#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char postfix[100];
    int a, b;
    
    printf("Enter postfix expression separated by commas(no-spaces): ");
    scanf("%s", postfix);

    for (int i = 0; postfix[i] != '\0'; ) {
       
        if (isdigit(postfix[i]) || (postfix[i] == '-' && isdigit(postfix[i+1]))) {
            int num = 0, sign = 1;
            if (postfix[i] == '-') {
             
                sign = -1;
                i++;
            }
            while (isdigit(postfix[i])) {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            push(num * sign);
        } else if (postfix[i] == ',') {
            i++; 
        } else { 
            b = pop();
            a = pop();
            switch(postfix[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': push(pow(a, b)); break;
            }
            i++;
        }
    }

    printf("Result = %d\n", pop());
    return 0;
}