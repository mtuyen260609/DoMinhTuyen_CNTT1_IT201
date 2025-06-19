#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, pos, value;
    printf("Enter a number: (0 < n<= 100)");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("Invalid Input");
    }
    int *arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon cap nhat");
    scanf("%d", &pos);
    printf("Nhap gia tri moi");
    scanf("%d", &value);
    arr[pos] = value;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}