#include <stdio.h>

int main() {
    int n, a, find = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("nhap gia tri can tim\n");
    scanf("%d", &a);
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("%d ", i);
            find = 1;
        }
    }
    if (!find) {
        printf("k tim thay phan tu\n");
    }
    return 0;
}
