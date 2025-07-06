#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
int timKiem(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value)
            return 1;
        current = current->next;
    }
    return 0;
}
int main() {
    Node* head = createNode(5);
    Node* node1 = createNode(10);
    Node* node2 = createNode(15);
    Node* node3 = createNode(20);
    Node* node4 = createNode(25);
    head->next = node1;
    node1->prev = head;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    int value;
    printf("Nhap so nguyen bat ki: ");
    scanf("%d", &value);
    if (timKiem(head, value)) {
        printf("True");
    }else {
        printf("False");
    }
    return 0;
}
