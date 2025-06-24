#include <stdio.h>
#include <stdlib.h>
int tongCheoChinh( int **arr, int n);
int tongCheoPhu(int **arr, int n);

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("nhap so cot: ");
    scanf("%d", &cols);
    if (rows <= 0 && cols <= 0) {
        printf("so hang va so cot khong hop le");
    }else if (cols <= 0) {
        printf("so cot khong hop le");
    }else if (rows <= 0) {
        printf("so hang khong hop le");
    }
    if (rows != cols) {
        printf("khong ton tai duong cheo chinh");
        printf("khong ton tai duong cheo phu");
        return 0;
    }
    int **arr = (int ** ) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        *(arr + i) = (int *) malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumChinh = tongCheoChinh(arr, rows);
    int sumPhu = tongCheoPhu(arr, rows);
    printf("Tong duong cheo chinh = %d, Tong duong cheo phu = %d\n", sumChinh, sumPhu);
    for (int i = 0; i < rows; i++) {
        free(*(arr + i));
    }
    free(arr);
    return 0;
}

int tongCheoChinh( int **arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][i];
        }
    }
    return sum;
}
int tongCheoPhu(int **arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][n-1-i];
        }
    }
    return sum;
}