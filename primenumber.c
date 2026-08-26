#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("The number %d is a Prime number.", number);
    else
        printf("The number %d is not a Prime number.", number);

    return 0;
}