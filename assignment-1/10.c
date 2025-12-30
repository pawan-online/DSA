/* Write a C program using function to find the average of array elements. The function should take the
array and its size as parameters and return the average as float. Use for loop inside the function. Print
the average in the main function.
. */
#include <stdio.h>

float average(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main()
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    float avg = average(arr, n);

    printf("Average of array elements: %.2f\n", avg);

    return 0;
}
