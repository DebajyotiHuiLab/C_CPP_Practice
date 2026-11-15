#include <stdio.h>
// a^b

int power(int a, int b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    return a * power(a, b - 1);
}

int main() {
    printf("%d", power(3, 4)); // 3^4
    return 0;
}