#include <stdio.h>
void binary(int n) {
    if (n == 0) {
        return 0;
    }
    binary(n/2);
    printf("%d", n%2);
}
int main() {
    int n;
    printf("Nhap so n bat ki");
    scanf("%d", &n);
    binary(n);
    return 0;
}