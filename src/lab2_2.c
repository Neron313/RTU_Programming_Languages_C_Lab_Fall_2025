#include <stdio.h>

long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main(void) {
    int n;

    printf("Enter n: ");
    while (scanf("%d", &n) != 1 || n < 0) {
        while (getchar() != '\n');
        printf("Invalid input. Enter n: ");
    }

    long long res = factorial(n);
    printf("Factorial: %lld\n", res);

    return 0;
}