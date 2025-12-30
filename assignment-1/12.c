/* Write a C program using function to count even and odd numbers in an array. The function should
take the array and its size as parameters and return two values (even count and odd count using pointers
or struct). Use for loop inside the function. Print the counts in the main function.
 */
#include <stdio.h>

struct Count
{
    int even;
    int odd;
};

struct Count countEvenOdd(int arr[], int n)
{
    struct Count c;
    c.even = 0;
    c.odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            c.even++;
        else
            c.odd++;
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
    struct Count result = countEvenOdd(arr, n);
    printf("Even numbers count: %d\n", result.even);
    printf("Odd numbers count: %d\n", result.odd);
    return 0;
}
