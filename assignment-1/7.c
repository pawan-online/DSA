/*
Write a C program using function to read and display elements of an array. The function should take
the array and its size as parameters. Use while loop to read and display elements. Print the elements in
the main function by calling this function.
*/
#include <stdio.h>

void readDisplay(int arr[], int n)
{
    int i = 0;
    printf("Enter elements: \n");
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("Array elements are : \n");
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
}

int main()
{
    int n;
    printf("Enter size of array: \n");
    scanf("%d", &n);

    int arr[n];
    readDisplay(arr, n);

    return 0;
}
