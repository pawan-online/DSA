/* Write a C program using function and while loop to perform multiple operations on an array: The
program should take the array and its size as input. The functions should perform the following
operations:
• Find sum of even numbers.
• Find the maximum element.
• Search a given element in the array.
• Sort the array in ascending order.
• Use while loop inside each function. Print the results in the main function */
#include <stdio.h>

int sume(int a[], int n)
{
    int i = 0, s = 0;
    while (i < n)
    {
        if (a[i] % 2 == 0)
            s = s + a[i];
        i++;
    }
    return s;
}

int max(int a[], int n)
{
    int i = 1, m = a[0];
    while (i < n)
    {
        if (a[i] > m)
            m = a[i];
        i++;
    }
    return m;
}

int search(int a[], int n, int x)
{
    int i = 0;
    while (i < n)
    {
        if (a[i] == x)
            return i;
        i++;
    }
    return -1;
}

void sort(int a[], int n)
{
    int i = 0, j, t;
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int n, i, a[100], x, p;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    printf("Enter elements of array: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter elements to search: \n");
    scanf("%d", &x);
    p = search(a, n, x);
    if (p == -1)
        printf("\n Elements not found in array \n");
    else
        printf("\nindex of searched element is %d \n", p);
    sort(a, n);
    printf("\n Elements are: \n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nsum is %d \n ", sume(a, n));
    printf("max is %d \n", max(a, n));
    return 0;
}
