#include <stdio.h>

int main() {
    int n, find = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min ) {
            min = arr[i];
            find = i;
        }
    }
    if (!find) {
        printf("k tim thay phan tu\n");
    }
    printf("%d", find);
    return 0;
}

