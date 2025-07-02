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
void inDanhSach(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf("->");
        temp = temp->next;
    }
    printf("->NULL\n");
}
Node* chenTaiViTri(Node* head, int value, int position) {
    Node* newNode = taoNodeMoi(value);
    if (position <= 1 || head == NULL) {
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    int index = 1;
    while (temp != NULL && index < position - 1) {
        temp = temp->next;
        index++;
    }
    if (temp == NULL) {
        free(newNode);
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

int main() {
    Node* head = taoNodeMoi(1);
    head->next = taoNodeMoi(2);
    head->next->next = taoNodeMoi(3);
    head->next->next->next = taoNodeMoi(4);
    head->next->next->next->next = taoNodeMoi(5);
    inDanhSach(head);
    int value, position;
    printf("\n\nvalue: ");
    scanf("%d", &value);
    printf("position: ");
    scanf("%d", &position);
    head = chenTaiViTri(head, value, position);
    printf("\n");
    inDanhSach(head);
    return 0;
}
