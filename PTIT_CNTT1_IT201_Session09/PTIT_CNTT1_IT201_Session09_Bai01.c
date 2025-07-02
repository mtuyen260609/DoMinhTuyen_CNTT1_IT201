#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* taoNodeMoi(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void taoDanhSachLienKet() {
    Node* head = taoNodeMoi(10);
    head->next = taoNodeMoi(20);
    head->next->next = taoNodeMoi(30);
    head->next->next->next = taoNodeMoi(40);
    head->next->next->next->next = taoNodeMoi(50);

    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    taoDanhSachLienKet();
    return 0;
}
