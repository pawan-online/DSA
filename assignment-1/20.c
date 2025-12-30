/*  Write a C program using function to reverse an array. The function should take the array and its size
as parameters and reverse the elements. Use for loop inside the function. Print the reversed array in the
main function. */
#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int i, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
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
