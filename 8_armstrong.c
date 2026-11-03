#include <stdio.h>
int main(void) {
    int n, temp, digits = 0, d, i;
    long long sum = 0, p;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    for (temp = n; temp > 0; temp /= 10) digits++;
    for (temp = n; temp > 0; temp /= 10) {
        d = temp % 10;
        for (p = 1, i = 0; i < digits; i++) p *= d;
        sum += p;
    }
    printf(sum == n ? "%d is an Armstrong number\n" : "%d is not an Armstrong number\n", n);
    return 0;
}
