/* . Write a C program to check whether an element is present in an array. The program should take an
array, its size, and the element to search as input. Use for loop to check the presence of the element.
Display an appropriate message in the main function indicating whether the element is present or not.*/
#include <stdio.h>

int main()
{
    int n, i, arr[100], key, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d is present in the array.\n", key);
    else
        printf("%d is not present in the array.\n", key);

    return 0;
}
