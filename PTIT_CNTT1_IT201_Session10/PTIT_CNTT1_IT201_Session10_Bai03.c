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
struct Node* themCuoi(struct Node* head, int gt) {
    struct Node* newnode = taoNode(gt);
    if (head == NULL) {
        return newnode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
int main() {
    struct Node* head = taoNode(5);
    head->next = taoNode(4);
    head->next->next = taoNode(3);
    head->next->next->next = taoNode(2);
    head->next->next->next->next = taoNode(1);
    duyet(head);
    int so;
    scanf("%d", &so);
        head = themCuoi(head, so);
        duyet(head);
    return 0;
}
