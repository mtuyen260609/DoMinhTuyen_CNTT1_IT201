#include <stdio.h>
int main() {
    int n, x;
    int arr[1000];
    printf("Nhap so luong phan tu n (0 < n < 1000): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("n khong hop le\n");
        return 0;
    }
    printf("Nhap cac phan tu cua mang da sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int left = 0;
    int right = n - 1;
    int found = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1) {
        printf("phan tu vi tri thu %d\n", found);
    } else {
        printf("Khong ton tai phan tu\n");
    }
    return 0;
}
