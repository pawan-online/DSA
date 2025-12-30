#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int evaluatePrefix(char prefix[]) {
    int length = strlen(prefix);
    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(prefix[i])) {
            // Convert char to int and push
            push(prefix[i] - '0');
        } else if (prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' ||
                   prefix[i] == '/' || prefix[i] == '^') {
            int a = pop();
            int b = pop();
            switch (prefix[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': push((int)pow(a, b)); break;
            }
        }
    }

    return pop();
}

int main() {
    char prefix[MAX];
    printf("Enter prefix expression (single-digit operands, no spaces): ");
    scanf("%s", prefix);

    int result = evaluatePrefix(prefix);
    printf("Result = %d\n", result);

    return 0;
}
