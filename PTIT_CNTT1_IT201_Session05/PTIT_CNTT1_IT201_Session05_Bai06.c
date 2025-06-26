#include <stdio.h>
int sumArray(int arr[], int i, int n) {
    if (i>=n) {
        return 0;
    }
    return arr[i] + sumArray(arr, i+1 , n);
}
int main() {
    int n;
    printf("Moi nhap so phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr[i]);
    }
    printf("%d", sumArray(arr,0,n));
    return 0;
}