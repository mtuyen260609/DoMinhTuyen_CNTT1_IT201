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
    int a = 1;
    while (current != NULL) {
        printf(" %d \n", current->data);
        printf(" %d \n", current->data);if (current->next != NULL) printf("<->");

        current = current->next;
        a++;
    }
}
void themCuoi(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
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

    int x;
    printf("Nhap so muon them: ");
    scanf("%d", &x);
    themCuoi(&head, x);
    printList(head);
    return 0;
}
