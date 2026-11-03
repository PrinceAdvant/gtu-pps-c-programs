#include <stdio.h>
int main(void) {
    int n, temp, rev = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    printf("Reverse = %d\n", rev);
    printf(rev == n ? "Palindrome\n" : "Not a palindrome\n");
    return 0;
}
