#include <stdio.h>
void chuyenThap(int n, char from, char to, char temp) {
    if (n == 1) {
        printf("Dia 1 chuyen tu %c sang %c\n", from, to);
        return;
    }
    chuyenThap(n - 1, from, temp, to);
    printf("Dia %d di chuyen tu %c sang %c\n", n, from, to);
    chuyenThap(n - 1, temp, to, from);
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong dai dien cho so dia: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input khong hop le\n");
    } else {
        chuyenThap(n, 'A', 'C', 'B');
    }
    return 0;
}
