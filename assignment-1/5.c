/*
Write a C program using recursive function to find factorial of a number. The function should take an
integer as a parameter and return its factorial. Call the function recursively. Print the result in the main
function.
*/
#include <stdio.h>

int factorial(int n) {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial: %d\n", factorial(n));
    return 0;
}
