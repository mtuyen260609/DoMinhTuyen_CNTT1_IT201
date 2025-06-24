#include <stdio.h>
#include <stdlib.h>
int findMax(int **arr, int rows, int cols);
int findMin(int **arr, int rows, int cols);

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("nhap so cot:  ");
    scanf("%d", &cols);
    if (rows <= 0 && cols <= 0) {
        printf("so hang va so cot khong hop le");
    }else if (cols <= 0) {
        printf("so cot khong hop le");
    }else if (rows <= 0) {
        printf("so hang khong hop le");
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
    int max = findMax(arr, rows, cols);
    int min = findMin(arr, rows, cols);
    printf("max = %d, min = %d\n", max, min);
    for (int i = 0; i < rows; i++) {
        free(*(arr + i));
    }
    free(arr);
    return 0;
}

int findMax(int **arr, int rows, int cols) {
    int a = *(*(arr + 0)+0);
    int max = a;
    for (int i = 0; i < rows; i++) {
        int *row = *(arr + i);
        for (int j = 0; j < cols; j++) {
            int value = *(row + j );
            if (value > max)
                max = value;
        }
    }
    return max;
}

int findMin(int **arr, int rows, int cols) {
    int b = *(*(arr + 0)+0);
    int min = b;
    for (int i = 0; i < rows; i++) {
        int *row = *(arr + i);
        for (int j = 0; j < cols; j++) {
            int value = *(row + j);
            if (value < min)
                min = value;
        }
    }
    return min;
}