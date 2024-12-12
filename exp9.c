#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* createNode(int val) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

TreeNode* searchBST(TreeNode* root, int val) {
    if (!root || root->val == val) return root;
    return val < root->val ? searchBST(root->left, val) : searchBST(root->right, val);
}

void printPreOrder(TreeNode* root) {
    if (root) {
        printf("%d ", root->val);
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

int main() {
    TreeNode* root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(7);
    root->left->left = createNode(1);
    root->left->right = createNode(3);

    int val = 2;
    TreeNode* result = searchBST(root, val);
    printf("Output for val = %d: ", val);
    result ? printPreOrder(result) : printf("[]");
    printf("\n");

    val = 5;
    result = searchBST(root, val);
    printf("Output for val = %d: ", val);
    result ? printPreOrder(result) : printf("[]");
    printf("\n");

    return 0;
}
