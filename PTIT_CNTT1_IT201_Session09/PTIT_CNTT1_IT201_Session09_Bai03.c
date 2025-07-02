#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* taoNodeMoi(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
int timKiem(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main() {
    Node* head = taoNodeMoi(1);
    head->next = taoNodeMoi(2);
    head->next->next = taoNodeMoi(3);
    head->next->next->next = taoNodeMoi(4);
    head->next->next->next->next = taoNodeMoi(5);
    int number;
    printf("Nhap so nguyen duong bat ky: ");
    scanf("%d", &number);
    if (timKiem(head, number)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
