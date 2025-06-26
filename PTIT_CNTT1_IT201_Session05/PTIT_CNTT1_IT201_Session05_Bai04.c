#include <stdio.h>
int print1ToNRecusion(int n, int i) {
    if (i > n) {
        return 0;
    }
    return i + print1ToNRecusion(n, i+1);
}
int main() {
    int a, b;
    printf(" first number: ");
    scanf("%d", &a);
    printf("second number: ");
    scanf("%d", &b);
    printf("%d", print1ToNRecusion(b, a));
    return 0;
}