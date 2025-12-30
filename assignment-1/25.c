/*  Write a C program using function to sort an array and then search a given element in the sorted
array. The function should take the array, its size, and the element to search as parameters. First, sort the
array in ascending order using for loop, then search for the element using for loop and return its index or
message if not found. Print the sorted array and search result in the main function. */
#include <stdio.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;
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
}

int searchElement(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, i, element, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to search: ");
    scanf("%d", &element);

    result = searchElement(arr, n, element);

    if (result != -1)
    {
        printf("Element %d found at index %d.\n", element, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
