#include <stdio.h>
int main() {
    int n;
    printf("Moi nhap n: ( 0< n <= 100)\n");
    scanf("%d",&n);
    if(0 > n || n > 100){
        printf("n kkhong hop le\n");
    }
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n/2 ; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}