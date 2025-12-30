/*
Write a C program using function to check whether a number is prime. The function should take an
integer as a parameter and return 1 if it is prime, otherwise 0. Use for loop inside the function. Print the
result in the main function
*/
#include <stdio.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i*i <= num; i++)
        if(num % i == 0) return 0;
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPrime(num))
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
    return 0;
}
