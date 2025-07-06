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
        printf("Node %d: %d \n",a, current->data);
        current = current->next;
        a++;
    }
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
    printList(head);
    return 0;
}
