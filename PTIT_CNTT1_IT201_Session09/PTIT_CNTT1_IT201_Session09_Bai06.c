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
Node* xoaPhanTuDau(Node* head) {
    if (head == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
void inDanhSach(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf("->");
        temp = temp->next;
    }
    printf("->NULL\n");
}
int main() {
    Node* head = taoNodeMoi(1);
    head->next = taoNodeMoi(2);
    head->next->next = taoNodeMoi(3);
    head->next->next->next = taoNodeMoi(4);
    head->next->next->next->next = taoNodeMoi(5);
    inDanhSach(head);
    head = xoaPhanTuDau(head);
    inDanhSach(head);
    return 0;
}