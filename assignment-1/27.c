/*Write a C program using function to swap the first and last elements of an array. The function should
take the array and its size as parameters. Use a temporary variable and simple swapping logic inside the
function. Print the modified array in the main function.
 */
#include <stdio.h>

void swap(int a[], int n)
{
    int t = a[0];
    a[0] = a[n - 1];
    a[n - 1] = t;
}

int main()
{
    int n, i, a[100];
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("\n Array ELements are \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    swap(a, n);
    printf("\nAfter swapping \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
