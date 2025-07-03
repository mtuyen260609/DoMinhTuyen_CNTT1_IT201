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
void duyetDanhSach(struct Node* head) {
    struct Node* p = head;
    while (p != NULL) {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}
void findMid(struct Node* head) {
    int lengthList = 0;
    struct Node* p = head;
    while (p != NULL) {
        lengthList++;
        p = p->next;
    }
    int midIndex = lengthList / 2;
    int index = 0;
    p = head;
    while (index < midIndex) {
        p = p->next;
        index++;
    }
    printf("Node %d: %d\n", midIndex + 1, p->data);
}
int main() {
    struct Node* head = taoNode(5);
    head->next = taoNode(4);
    head->next->next = taoNode(3);
    head->next->next->next = taoNode(2);
    head->next->next->next->next = taoNode(1);
    duyetDanhSach(head);
    findMid(head);

    return 0;
}