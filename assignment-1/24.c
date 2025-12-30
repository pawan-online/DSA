/*
. Write a C program using function to sort an array in ascending order and display only unique
elements. The function should take the array and its size as parameters, sort the elements in ascending
order, and remove duplicates while displaying. Use for loop inside the function. Print the unique sorted
array in the main function
*/
#include <stdio.h>

void sortAndUnique(int arr[], int n)
{
    int i, j, temp;

    // Sort the array
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print unique elements
    printf("Unique sorted array: ");
    for (i = 0; i < n; i++)
    {
        if (i == 0 || arr[i] != arr[i - 1])
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sortAndUnique(arr, n);

    return 0;
}
