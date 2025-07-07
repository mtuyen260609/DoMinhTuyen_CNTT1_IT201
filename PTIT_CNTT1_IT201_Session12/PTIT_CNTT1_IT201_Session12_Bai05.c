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
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) printf("<->");
        current = current->next;
    }
    printf("->NULL\n");
}
void delete(Node** head, int value) {
    Node* current = *head;
    while (current != NULL) {
        Node* nextNode = current->next;
        if (current->data == value) {
            if (current->prev != NULL)
                current->prev->next = current->next;
            else
                *head = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
            free(current);
        }
        current = nextNode;
    }
}

int main() {
    Node* head = createNode(5);
    Node* node1 = createNode(4);
    Node* node2 = createNode(3);
    Node* node3 = createNode(5);
    Node* node4 = createNode(2);
    Node* node5 = createNode(1);
    Node* node6 = createNode(5);
    head->next = node1;
    node1->prev = head;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;
    node5->next = node6;
    node6->prev = node5;
    printList(head);
    int x;
    printf("Nhap gia tri muon xoa: ");
    scanf("%d", &x);
    delete(&head, x);
    printList(head);
    return 0;
}