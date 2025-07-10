#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int *array;
    int front;
    int rear;
    int capacity;
} Queue;
Queue* createQueue(int size) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->array = (int*)malloc(size * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->capacity = size;
    return q;
}
int isEmpty(Queue* queue) {
    if (queue->rear < queue->front) {
        printf("true\n");
        return 1;
    }
    printf("false\n");
    return 0;
}

int main() {
    int size;
    printf("Nhap kich thuoc hang doi: ");
    Queue* queue = createQueue(size);
    isEmpty(queue);
    return 0;
}