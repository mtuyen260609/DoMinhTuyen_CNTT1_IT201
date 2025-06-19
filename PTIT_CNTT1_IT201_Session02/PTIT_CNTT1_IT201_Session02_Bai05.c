#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;
    printf("Moi nhap n: (0 < n <= 100)");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("n khong hop le");
    }
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("nhap vi tri muon xoa");
    scanf("%d", &pos);
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
