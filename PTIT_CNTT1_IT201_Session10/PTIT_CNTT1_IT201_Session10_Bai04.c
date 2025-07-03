#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* taoNode(int gt) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = gt;
    newnode->next = NULL;
    return newnode;
}
void duyet(struct Node* head) {
    struct Node* newnode = head;
    while (newnode != NULL) {
        printf("%d->", newnode->data);
        newnode = newnode->next;
    }
    printf("NULL\n");
}
struct Node* xoaCuoi(struct Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
int main() {
    struct Node* head = taoNode(5);
    head->next = taoNode(4);
    head->next->next = taoNode(3);
    head->next->next->next = taoNode(2);
    head->next->next->next->next = taoNode(1);
    printf("Danh sach ban dau: ");
    duyet(head);
    head = xoaCuoi(head);
    printf("Danh sach sau khi xoa cuoi: ");
    duyet(head);
    return 0;
}