#include <stdio.h>
int main(void) {
    int n, i, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) is_prime = 0; /* 1 is not prime */
    for (i = 2; i * i <= n && is_prime; i++)
        if (n % i == 0) is_prime = 0;
    printf(is_prime ? "%d is prime\n" : "%d is not prime\n", n);
    return 0;
}
