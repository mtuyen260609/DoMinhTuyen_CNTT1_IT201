#include <stdio.h>
void print1ToNRecusion(int n, int i) {
    if (i > n) {
        return;
    }
    printf(" %d ", i);
    print1ToNRecusion(n, i+1);
}
int main() {
    int n;
    printf("Moi nhap so nguyen duong bat ki: ");
    scanf("%d", &n);
    print1ToNRecusion(n, 1);
    return 0;
}