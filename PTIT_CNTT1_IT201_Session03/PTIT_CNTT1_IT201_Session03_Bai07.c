#include <stdio.h>
int tongHang(int k, int cols, int arr[][cols]);
int main() {
    int rows, cols;
    printf("nhap so hang: (0 < rows < 1000)");
    scanf("%d", &rows);
    if (rows <= 0 || rows >= 1000) {
        printf("so hang khong hop le\n");
    }
    printf("nhap so cot: (0 < cols < 1000)");
    scanf("%d", &cols);
    if (cols <= 0 || cols >= 1000) {
        printf("so cot khong hop le\n");
    }
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    printf("nhap so hang can tinh tong: ");
    scanf("%d", &k);
    if (k <= 0 || k >= rows) {
        printf("hang can tinh khong ton tai\n");
    }
    int sum = tongHang(k, cols, arr);
    printf("tong hang = %d", sum)
    return 0;
}
int tongHang(int k, int cols, int arr[][cols]) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        sum += arr[k][i];
    }
    return sum;
}