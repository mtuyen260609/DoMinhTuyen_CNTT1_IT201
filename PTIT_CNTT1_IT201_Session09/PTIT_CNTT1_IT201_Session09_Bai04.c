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
int demSoLuongPhanTu(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    Node* head = taoNodeMoi(1);
    head->next = taoNodeMoi(2);
    head->next->next = taoNodeMoi(3);
    head->next->next->next = taoNodeMoi(4);
    head->next->next->next->next = taoNodeMoi(5);
    int soLuong = demSoLuongPhanTu(head);
    printf("Danh sach lien ket co %d phan tu\n", soLuong);

    return 0;
}