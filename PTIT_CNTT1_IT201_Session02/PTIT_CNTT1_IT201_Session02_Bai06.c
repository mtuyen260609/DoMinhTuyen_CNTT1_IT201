#include <stdio.h>
#include <stdlib.h>

int main() {
    int n , pos, value;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    if ((n < 0) || (n > 100)) {
        printf("n khong hop le");
    }
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon them: ");
    scanf("%d", &pos);
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    n++;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
