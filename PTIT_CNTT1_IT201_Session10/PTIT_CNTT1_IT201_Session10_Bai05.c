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
struct Node* xoaGiaTri(struct Node* head, int giaTri) {
    while (head != NULL && head->data == giaTri) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
    struct Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->next->data == giaTri) {
            struct Node* temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            current = current->next;
        }
    }

    return head;
}
int main() {
    struct Node* head = taoNode(5);
    head->next = taoNode(4);
    head->next->next = taoNode(3);
    head->next->next->next = taoNode(5);
    head->next->next->next->next = taoNode(2);
    head->next->next->next->next->next = taoNode(1);
    head->next->next->next->next->next->next = taoNode(5);
    duyet(head);
    int so;
    printf("Nhap gia tri can xoa: ");
    scanf("%d", &so);
    head = xoaGiaTri(head, so);
    duyet(head);

    return 0;
}