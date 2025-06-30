#include <stdio.h>
#include <string.h>
void sort(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    int valid = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            valid = 1;
            break;
        }
    }
    if (!valid) {
        printf("Chuoi khong hop le\n");
        return 0;
    }
    printf("str = \"%s\"\n", str);
    sort(str);
    printf("str = \"%s\"\n", str);
    return 0;
}
