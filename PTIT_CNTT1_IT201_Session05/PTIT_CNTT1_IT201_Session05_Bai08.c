#include <stdio.h>
int result = 0;
int check(char str[], int index) {
    if(str[index] == '\0') {
        return 1;
    }if (str[index] < '0' || str[index] > '9') {
        return 0;
    }
    result = result * 10 + (str[index] - '0');
    return check(str, index+1);
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if(check(input, 0)) {
        printf("%d", result);
    }else {
        printf("khong hop le");
    }
    return 0;
}