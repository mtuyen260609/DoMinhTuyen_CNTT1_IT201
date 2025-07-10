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
        return 1;
    }
    return 0;
}
void display(Queue* queue) {
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->array[i]);
    }
}

int main() {
    Queue* q = createQueue(5);
    q->array[++q->rear] = 1;
    q->array[++q->rear] = 2;
    q->array[++q->rear] = 5;
    display(q);
    return 0;
}