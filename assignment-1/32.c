/* Write a C program using function and while loop to perform multiple operations on an array: The
program should take the array and its size as input. The functions should perform the following
operations:
• Count even numbers.
• Replace odd numbers with 0 (in-place).
• Display the modified array.
• Use while loop and if conditions inside each function. Print the results in the main function */
#include <stdio.h>

int counte(int a[], int n)
{
    int i = 0, c = 0;
    while (i < n)
    {
        if (a[i] % 2 == 0)
            c++;
        i++;
    }
    return c;
}

void replace(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (a[i] % 2 != 0)
            a[i] = 0;
        i++;
    }
}
void display(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%d ", a[i]);
        i++;
    }
}
int main()
{
    int n, i, a[100];
    printf("Enter size of array: \n");
    scanf("%d", &n);
    printf("Enter elements of array: \n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("event count = %d ", counte(a, n));
    replace(a, n);
    printf("\nReplaced: \n");
    display(a, n);
    return 0;
}
