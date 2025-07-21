#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Không thể cấp phát bộ nhớ.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void postorderTraversal(Node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}
//        2
//       / \
//      3   4
//         /
//        5
int main() {
    Node* root = createNode(2);
    root->left = createNode(3);
    root->right = createNode(4);
    root->right->left = createNode(5);

    printf("Duyet cay theo Hau thu tu:\n");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
