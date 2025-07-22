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
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int countLeaves(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countLeaves(root->left) + countLeaves(root->right);
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
    int leafCount = countLeaves(root);
    printf("So la trong cay: %d\n", leafCount);

    printf("Cay theo chieu rong: ");
    breadthFirst(root);
    printf("\n");
    return 0;
}