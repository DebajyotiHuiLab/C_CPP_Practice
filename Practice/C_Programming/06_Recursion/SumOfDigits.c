#include <stdio.h>

int sum(int n) {
    if (n >= 1 && n <= 9) {
        return n;
    } else {
        return n % 10 + sum(n / 10);
    }
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d", sum(n));

    return 0;
}