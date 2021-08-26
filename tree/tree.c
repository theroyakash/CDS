#include <stdio.h>

struct TreeNode {
    char data;
    struct TreeNode *left, *right;
};

typedef struct TreeNode TreeNode;


void inOrderTraversal(TreeNode *nodePointer){
    
    if (nodePointer != NULL) {
        inOrderTraversal(nodePointer->left);
        printf("%c", nodePointer->data);
        inOrderTraversal(nodePointer->right);
    }
}

void preOrderTraversal(TreeNode *nodePointer){
    
    if (nodePointer != NULL) {
        printf("%c", nodePointer->data);
        preOrderTraversal(nodePointer->left);
        preOrderTraversal(nodePointer->right);
    }
}

void postOrderTraversal(TreeNode *nodePointer){
    
    if (nodePointer != NULL) {
        postOrderTraversal(nodePointer->left);
        postOrderTraversal(nodePointer->right);
        
        printf("%c", nodePointer->data);
    }
}


int main(){

    
    TreeNode n1, n2, n3;
    
    n1.data = 'A';
    n2.data = 'B';
    n3.data = 'C';
    
    n1.left = &n2;
    n1.right = &n3;
    
    n2.left = NULL;
    n2.right = NULL;
    
    n3.left = NULL;
    n3.right = NULL;
    
    printf("In Order: ");
    inOrderTraversal(&n1);
    printf("\n");
    printf("PRE Order: ");
    preOrderTraversal(&n1);
    printf("\n");
    printf("Post Order: ");
    postOrderTraversal(&n1);
    
    return 0;
}
