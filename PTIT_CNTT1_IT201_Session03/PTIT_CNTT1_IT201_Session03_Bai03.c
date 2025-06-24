#include <stdio.h>
#include <stdlib.h>
float average(int a, int b);
int main() {
    int n;
    int sum = 0;
    int count = 0;
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
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
    }
    }
        printf("average = %.2f",average(sum, count));
    free(arr);
    return 0;

}

float average(int a, int b) {
    return (float)a / b;
}
