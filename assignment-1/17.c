/*  Write a C program using function to find the maximum element in an array. The function should take
the array and its size as parameters and return the maximum element. Use for loop inside the function.
Print the maximum element in the main function. */
#include <stdio.h>

int findMax(int arr[], int n)
{
    int i, max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int n, i, arr[100], maxElement;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    maxElement = findMax(arr, n);
    printf("Maximum element in the array: %d\n", maxElement);

    return 0;
}
