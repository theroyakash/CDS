#ifndef TREE_STRUCTURE
#define TREE_STRUCTURE

#include <stdio.h>

struct TreeNode {
	char data;
	struct TreeNode *left, *right;
};

typedef struct TreeNode TreeNode;

void inOrderTraversal(TreeNode *nodePointer);
void preOrderTraversal(TreeNode *nodePointer);
void postOrderTraversal(TreeNode *nodePointer);
void doubleOrderTraversal(TreeNode *basePointer);
long int countNodes(TreeNode *head);
long int leafs(TreeNode *head);
long int max(long int a, long int b);
long int treeDepth(TreeNode *head);
long int countFullNodes(TreeNode *head);
int checkCompleteness(TreeNode *head);


#endif