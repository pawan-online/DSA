/* Write a C program using separate functions to perform multiple operations on the same array: The
program should take the array and its size as input. The functions should perform the following
operations:
• Find the sum of array elements.
• Find the maximum element in the array.
• Count even and odd numbers in the array.
• Use for loop inside each function. Print the results in the main function. */
#include <stdio.h>

int sumArray(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    return sum;
}

int maxArray(int a[], int n)
{
    int i, max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int countEven(int a[], int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            count++;
    }
    return count;
}

int countOdd(int a[], int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            count++;
    }
    return count;
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Sum of elements = %d\n", sumArray(a, n));
    printf("Maximum element = %d\n", maxArray(a, n));
    printf("Number of even elements = %d\n", countEven(a, n));
    printf("Number of odd elements = %d\n", countOdd(a, n));

    return 0;
}
