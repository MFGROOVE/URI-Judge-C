#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("X = %d\n", soma(a, b));
    return 0;
}
