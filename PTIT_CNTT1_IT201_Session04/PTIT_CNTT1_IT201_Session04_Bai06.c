#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[20];
    int age;
};
int main() {
    int find, id;
    struct Student student[5];
    for (int i = 0; i < 5; i++) {
        student[i].id = i+1;
        printf("nhap ten sinh vien : ");
        fgets(student[i].name, sizeof(student[i].name), stdin);
        printf("nhap tuoi sinh vien : ");
        scanf("%d", &student[i].age);
        fflush(stdin);
    }
    printf("nhap id sinh vien can tim : ");
    scanf("%d", &id);
    for (int i = 0; i < 5; i++) {
        if (student[i].id == id) {
            find = 1;
            break;
        }
    }
    if (!find) {
        printf("sinh vien khong ton tai : ");
    }else {
        printf("ID: %d, name: %s, age: %d \n", id, student[find].name, student[find].age);
    }
    return 0;
}
