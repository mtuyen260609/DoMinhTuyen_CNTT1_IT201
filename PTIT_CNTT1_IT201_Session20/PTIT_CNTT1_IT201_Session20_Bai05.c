#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) return NULL;
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
int findMax(Node* root) {
    if (root == NULL) return -999999;
    int maxLeft = findMax(root->left);
    int maxRight = findMax(root->right);

    int max = root->data;
    if (maxLeft > max) max = maxLeft;
    if (maxRight > max) max = maxRight;

    return max;
}
void breadthFirst(Node* root) {
    if (root == NULL) return;

    Node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear) {
        Node* current = queue[front++];
        printf("%d ", current->data);

        if (current->left) queue[rear++] = current->left;
        if (current->right) queue[rear++] = current->right;
    }
}
int main() {
    Node* node1 = createNode(2);
    Node* node2 = createNode(3);
    Node* node3 = createNode(4);
    Node* node4 = createNode(5);
    Node* root = node1;
    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    int maxValue = findMax(root);
    printf("Gia tri lon nhat trong cay: %d\n", maxValue);
    printf("Cay theo chieu rong: ");
    breadthFirst(root);
    printf("\n");

    return 0;
}