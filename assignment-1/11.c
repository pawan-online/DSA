/* Write a C program using function to find the sum of only those array elements which are divisible by
3. The function should take the array and its size as parameters and return the sum. Use while loop
inside the function. Print the sum in the main function. */
#include <stdio.h>

int sumDivBy3(int arr[], int n)
{
    int i = 0, sum = 0;
    while (i < n)
    {
        if (arr[i] % 3 == 0)
        {
            sum += arr[i];
        }
        i++;
    }
    return sum;
}

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = sumDivBy3(arr, n);
    printf("Sum of elements divisible by 3: %d\n", result);
    return 0;
}
