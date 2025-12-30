/*
Write a C program using function to read and display elements of an array. The function should take
the array and its size as parameters. Use for loop to read and display elements. Print the elements in the
main function by calling this function.
*/
#include <stdio.h>

void readDisplay(int arr[], int n) {
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    readDisplay(arr, n);

    return 0;
}
