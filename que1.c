#include <stdio.h>

int main() {
    int x = 5;

    x += 3;

    x -= 2;
    x *= 4;
    x /= 2;
    x %= 3;

    printf("Final value of x = %d", x);

    return 0;
}