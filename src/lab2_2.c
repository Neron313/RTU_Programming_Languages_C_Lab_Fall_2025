#include <stdio.h>

long long factorial(int n) {
    long long res = 1;
    int i = 1;

    while (i <= n) {
        res *= i;
        i++;
    }

    return res;
}

int main(void) {
    int n;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: invalid input\n");
        return 1;
    }

    long long res = factorial(n);
    printf("Factorial: %lld\n", res);

    return 0;
}