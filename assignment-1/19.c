/* Write a C program using function to find the second largest element in an array. The function should
take the array and its size as parameters and return the second largest element. Use while loop inside
the function. If finding the second largest is not possible (e.g., all elements are equal or only one
element exists), display proper message in the main function. */
#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int i = 0, largest, second;
    if (n < 2)
        return -1; // Not possible

    largest = second = arr[0];

    while (i < n)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
        i++;
    }

    if (largest == second)
        return -1; // All elements equal
    return second;
}

int main()
{
    int n, i, arr[100], result;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second largest element not possible.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = secondLargest(arr, n);

    if (result == -1)
        printf("Second largest element not possible.\n");
    else
        printf("Second largest element: %d\n", result);

    return 0;
}
