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
        if (current->next != NULL)
            printf("<->");
        current = current->next;
    }
    printf("->NULL\n");
}
Node* themDau(Node* head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    return newNode;
}
int main() {
    Node* head = createNode(1);
    Node* node1 = createNode(2);
    Node* node2 = createNode(3);
    Node* node3 = createNode(4);
    Node* node4 = createNode(5);
    head->next = node1;
    node1->prev = head;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;

    printList(head);
    int newValue;
    scanf("%d", &newValue);
    head = themDau(head, newValue);
    printList(head);
    return 0;
}
