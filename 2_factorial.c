#include <stdio.h>
unsigned long long fact_rec(int n) { return n <= 1 ? 1ULL : n * fact_rec(n - 1); }
int main(void) {
    int n, i;
    unsigned long long f = 1;
    printf("Enter a non-negative number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) f *= i;
    printf("Loop: %d! = %llu\n", n, f);
    printf("Recursion: %d! = %llu\n", n, fact_rec(n));
    return 0;
}
