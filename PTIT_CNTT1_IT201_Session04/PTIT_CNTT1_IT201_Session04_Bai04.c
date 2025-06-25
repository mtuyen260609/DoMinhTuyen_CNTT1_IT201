
#include <stdio.h>

int main() {
    int n, a, find = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    if (n < 0 || n >= 1000) {
        printf("so phan tu muon them k hop le\n");
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("nhap gia tri can tim\n");
    scanf("%d", &a);
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            find = i;
        }
    }
    if (!find) {
        printf("k tim thay phan tu\n");
    }
    printf("%d", find);
    return 0;
}
