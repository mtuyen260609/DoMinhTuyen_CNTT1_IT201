#include <stdio.h>
int sum(int n) {
    if (n==0) {
        return 0;
    }
    return (n%10) + sum(n/10);
}
int main() {
    int n;
    printf("nhap vao so nguyen duong bat ki: ");
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
    }else {
        printf("%d", sum(n));
    }
    return 0;
}