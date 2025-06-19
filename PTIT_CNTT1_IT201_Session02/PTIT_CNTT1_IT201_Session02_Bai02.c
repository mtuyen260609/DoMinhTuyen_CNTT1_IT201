#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi nhap n: (0 < n <= 100)\n");
    scanf("%d", &n);
    if(n < 0 || n > 100) {
        printf("n khong hop le\n");
    }
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int a;
    int count = 0;
    printf("nhap so bat ki\n");
    scanf("%d", &a);
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++;
        }
    }
    printf("so %d xuat hien %d lan", a, count);
    free(arr);
    return 0;

}
