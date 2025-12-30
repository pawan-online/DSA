/*  Write a C program using function to find the maximum element in an array. The function should take
the array and its size as parameters and return the maximum element. If the array contains only one
element, display a proper message in the main function. Use a for loop inside the function. */
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

    if (n == 1)
    {
        printf("Array contains only one element: ");
        scanf("%d", &arr[0]);
        printf("Maximum element: %d\n", arr[0]);
    }
    else
    {
        printf("Enter %d elements: ", n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        maxElement = findMax(arr, n);
        printf("Maximum element in the array: %d\n", maxElement);
    }

    return 0;
}
