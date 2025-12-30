/* Write a C program using function to search an element in an array and display the index position(s)
where it occurs. The function should take the array, its size, and the element to search as parameters.
Use for loop inside the function to find all occurrences. Print the index position(s) in the main function.*/
#include <stdio.h>

void searchElement(int arr[], int n, int key)
{
    int i, found = 0;
    printf("Element %d found at index positions: ", key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found)
        printf("None");
    printf("\n");
}

int main()
{
    int n, i, arr[100], key;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    searchElement(arr, n, key);

    return 0;
}