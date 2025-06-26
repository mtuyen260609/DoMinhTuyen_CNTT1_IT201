#include <stdio.h>
int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Moi nhap so nguyen duong bat ki: ");
    scanf("%d", &n);
    if (n <= 0 ) {
        printf("Khong hop le");
    }
    printf("%d",factorial(n) );
    return 0;
}