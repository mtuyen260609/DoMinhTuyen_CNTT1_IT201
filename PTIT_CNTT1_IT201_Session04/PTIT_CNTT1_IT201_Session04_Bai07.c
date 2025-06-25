#include <stdio.h>

int main() {
    int n, a, find = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n-1-i]) {
            printf("cap doi xung: (%d, %d)", arr[i], arr[n-1-i]);
            find = 1;
        }
    }
    if (!find) {
        printf("k co phan tu doi xung\n");
    }
    return 0;
}
