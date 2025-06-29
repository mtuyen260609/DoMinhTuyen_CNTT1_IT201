#include <stdio.h>
int fibonaci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonaci(n-1) + fibonaci(n-2);
}
int main() {
    int n;
    int result[100];
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
    }
    for (int i = 0; i < n; i++) {
        result[i] = fibonaci(n-i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
