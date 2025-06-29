#include <stdio.h>
int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int minPrev = findMin(arr, n - 1);
    return (arr[n - 1] < minPrev) ? arr[n - 1] : minPrev;
}
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int maxPrev = findMax(arr, n - 1);
    return (arr[n - 1] > maxPrev) ? arr[n - 1] : maxPrev;
}

int main() {
    int n;
    printf("Moi nhap so luon phan tu trong mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Khong hop le\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = findMin(arr, n);
    int max = findMax(arr, n);
    printf("%d, %d\n", min, max);
    return 0;
}
