#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc hàng đợi
struct Queue {
    int *array;
    int front;
    int rear;
    int maxSize;
};

struct Queue* createQueue(int size) {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->array = (int*)malloc(size * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->maxSize = size;
    return q;
}
void enQueue(Queue* queue, int val) {
    if (queue->rear == queue->cap -1) {
        printf("hang doi full\n");
        return;
    }
    queue->arr[++queue->rear] = val;
}
int main() {
    Queue* q = createQueue(5);
    int val;
    for (int i=0;i<5;i++) {
        printf("nhap gia tri them: ");
        scanf("%d",&val);
        enQueue(q,val);
    }
    printf("da them xong cac gia tri");
    return 0;
}