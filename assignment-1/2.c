/*
Write a C program using function to find sum of digits of a number. The function should take a number
(for eg: 123456) as a parameter and return the result. Use while loop inside the function. Print the result
in the main function.
*/
#include <stdio.h>

int sumDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumDigits(num));
    return 0;
}
