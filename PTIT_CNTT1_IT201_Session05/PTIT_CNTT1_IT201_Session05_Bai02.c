#include <stdio.h>
int print1ToNRecusion(int n, int i) {
    if (i > n) {
        return 0;
    }
    return i+ print1ToNRecusion(n, i+1);
}
int main() {
    int n;
    printf("Moi nhap so nguyen duong bat ki: ");
    scanf("%d", &n);
    if (n <= 0 ) {
        printf("Khong hop le");
    }
    printf("%d",print1ToNRecusion(n, 1) );
    return 0;
}