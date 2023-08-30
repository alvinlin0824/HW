// Please write a function so that it can judge whether the incoming parameter is a prime number
// Returns 1 if it is a prime number and 0 if it is not
// And divide the function into prime.h and prime.c

#include<stdio.h>
#include "prime.h"

int IsPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d",IsPrime(n));

    return 0;
}