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
void sapXep(struct Node* head) {
    struct Node* i, *j, *min;
    for (i = head; i != NULL && i->next != NULL; i = i->next) {
        min = i;
        for (j = i->next; j != NULL; j = j->next) {
            if (j->data < min->data) {
                min = j;
            }
        }
        if (min != i) {
            int temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
    }
}
int main() {
    struct Node* head = taoNode(5);
    head->next = taoNode(7);
    head->next->next = taoNode(3);
    duyetDanhSach(head);
    sapXep(head);
    duyetDanhSach(head);
    return 0;
}
