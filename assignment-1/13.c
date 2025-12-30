/* Write a C program using function to count positive, negative, and zero elements in an array. The
function should take the array and its size as parameters and return three values (positive, negative, zero
counts using pointers or struct). Use for loop and if-else conditions inside the function. Print the counts
in the main function. */
#include <stdio.h>

struct Counts
{
    int positive;
    int negative;
    int zero;
};

struct Counts countElements(int arr[], int n)
{
    struct Counts c;
    c.positive = 0;
    c.negative = 0;
    c.zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            c.positive++;
        else if (arr[i] < 0)
            c.negative++;
        else
            c.zero++;
    }
    return c;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    struct Counts result = countElements(arr, n);
    printf("Positive numbers count: %d\n", result.positive);
    printf("Negative numbers count: %d\n", result.negative);
    printf("Zero elements count: %d\n", result.zero);
    return 0;
}
