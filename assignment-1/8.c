/*
. Write a C program using function to find the sum of array elements. The function should take the array
and its size as parameters and return the sum. Use for loop inside the function. Print the sum in the main
function.
*/
#include <stdio.h>

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum: %d\n", sumArray(arr, n));
    return 0;
}
