#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("n khong hop le\n");
        return 0;
    }
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap so phan tu muon them: ");
    scanf("%d", &m);
    if (m < 0 || m >= 1000) {
        printf("m khong hop le\n");
    }
    int *temp = realloc(arr, sizeof(int) * (n + m));
    arr = temp;
    for (int i = n; i < n + m; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n + m; i++) {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}
