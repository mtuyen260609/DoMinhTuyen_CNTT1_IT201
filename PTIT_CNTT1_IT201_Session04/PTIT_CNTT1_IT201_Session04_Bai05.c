#include <stdio.h>
int main() {
    int n, x, find=0;
    printf("nhap so phan tu : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n -i -1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("nhap gia tri can tim: ");
    scanf("%d", &x);
    int l=0, r=n-1;
    while (l<=r) {
        int mid = (l+r)/2;
        if (arr[mid] == x) {
            find = 1;
            break;
        }else if (arr[mid] > x) {
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }
    if (!find) {
        printf("phan tu khong co trong mang ");
    }else {
        printf("phan tu co trong mang ");
    }
    return 0;
}