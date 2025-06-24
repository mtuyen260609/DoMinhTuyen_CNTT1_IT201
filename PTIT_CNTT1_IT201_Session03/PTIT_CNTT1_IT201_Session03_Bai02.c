#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Nhap n: (0 < n < 1000)\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("so luong phan tu khong duoc am\n");
    }
    if (n == 0) {
        printf("so luong phan tu phai lon hon 0\n");
    }
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("so lon nhat la: %d \n", max);
    free(arr);
    return 0;

}

