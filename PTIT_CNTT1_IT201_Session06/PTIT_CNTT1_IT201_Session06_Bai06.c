#include <stdio.h>
int cach(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return cach(n - 1) + cach(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input\n");
        return 0;
    }
    int result = cach(n);
    printf("%d\n", result);
    return 0;
}
