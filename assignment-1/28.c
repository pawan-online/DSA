/*  Write a C program using a function to delete an element from a given position in an array by shifting
elements. The function should take the array, its size, and the position to delete as parameters. Use for
loop to shift elements and reduce the effective size of the array. Print the modified array in the main
function. */
#include <stdio.h>

int delete(int a[], int n, int pos)
{
    int i;
    for (i = pos; i < n; i++)
        a[i - 1] = a[i];

    return n - 1;
}

int main()
{
    int a[100], n, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    n = delete(a, n, pos);

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
