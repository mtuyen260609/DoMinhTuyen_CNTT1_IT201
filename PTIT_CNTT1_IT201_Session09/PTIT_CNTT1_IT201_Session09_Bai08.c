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
Node* xoaTaiViTri(Node* head, int position) {
    if (head == NULL || position < 1) return head;
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    int index = 1;

    while (temp != NULL && index < position - 1) {
        temp = temp->next;
        index++;
    }
    if (temp == NULL || temp->next == NULL) {
        return head;
    }
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
    return head;
}
int main() {
    Node* head = taoNodeMoi(1);
    head->next = taoNodeMoi(2);
    head->next->next = taoNodeMoi(3);
    head->next->next->next = taoNodeMoi(4);
    head->next->next->next->next = taoNodeMoi(5);
    inDanhSach(head);
    int position;
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &position);
    head = xoaTaiViTri(head, position);
    inDanhSach(head);
    return 0;
}