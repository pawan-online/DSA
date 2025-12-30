/*Write a C program using function to reverse an array and then display the maximum element. The
function should take the array and its size as parameters, reverse the array, and return the maximum
element. Use for loop inside the function. Print the reversed array and maximum element in the main
function. */
#include <stdio.h>

int reverseAndMax(int arr[], int n)
{
    int i, temp, max = arr[0];
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
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

    maxElement = reverseAndMax(arr, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nMaximum element: %d\n", maxElement);

    return 0;
}
