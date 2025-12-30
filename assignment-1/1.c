/*
Write a C program using function to calculate the power of a number (aⁿ). The function should take
two integers a and n as parameters and return the result. Use for loop inside the function. Print the
result in the main function.
*/
#include <stdio.h>

int power(int a, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= a;
    return result;
}

int main()
{
    int a, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &n);
    printf("Result: %d\n", power(a, n));
    return 0;
}
