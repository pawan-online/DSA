/* Write a C program using functions to find the following in an array: The program should take the
array and its size as input. The functions should perform the following operations:
• Find the sum of even elements.
• Find the product of odd elements.
• Use for loop inside each function. Print the results in the main function */
#include <stdio.h>

int sumEven(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum = sum + a[i];
    }
    return sum;
}

int productOdd(int a[], int n)
{
    int i, product = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            product = product * a[i];
    }
    return product;
}

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Sum of even elements = %d\n", sumEven(a, n));
    printf("Product of odd elements = %d\n", productOdd(a, n));

    return 0;
}
