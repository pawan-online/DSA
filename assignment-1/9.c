/*
Write a C program using function to find the sum of array elements. The function should take the array
and its size as parameters and return the sum. Use while loop inside the function. Print the sum in the
main function.
*/
#include <stdio.h>

int sumArray(int a[], int n)
{
    int i = 0, sum = 0;
    while (i < n)
    {
        sum = sum + a[i];
        i++;
    }
    return sum;
}

int main()
{
    int n, i;
    int a[100];
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The sum of elements is %d", sumArray(a, n));

    return 0;
}
