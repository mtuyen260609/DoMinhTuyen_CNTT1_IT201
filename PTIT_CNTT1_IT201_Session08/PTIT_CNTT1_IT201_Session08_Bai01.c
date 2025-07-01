#include <stdio.h>
int main() {
    int n;
    printf("Nhap vao so luong phan tu cua mang");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    int find=0;
    printf("Nhap vao phan tu can tim kiem: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i]==x) {
            find=i;
        }
    }
    if (!find) {
        printf("khong ton tai phan tu can tim\n");
    }else {
        printf("vi tri %d  ",find );
    }
    return 0;
}