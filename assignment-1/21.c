/*. Write a C program using function to reverse the array without using another array (in-place). The
function should take the array and its size as parameters and reverse the elements in-place. Use while
loop inside the function. Print the reversed array in the main function. */
#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int i = 0, j = n - 1, temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n, i, arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
