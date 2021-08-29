/** @file tree.h
 *  @brief Function prototypes for generic binary trees.
 *
 *  This contains the prototypes for for generic binary trees,
 *  every utility function for a tree you will ever need.
 *
 *  @author theroyakash
 *  @bug No known bugs.
 */

#ifndef TREE_STRUCTURE
#define TREE_STRUCTURE

#include <stdio.h>

struct TreeNode {
	char data;
	struct TreeNode *left, *right;
};

typedef struct TreeNode TreeNode;

struct AVLNode {
    int value;
    struct AVLNode *left;
    struct AVLNode *right;
    int height;
};

typedef struct AVLNode AVLNode;


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


// AVL Tree Prototypes
long int height(AVLNode *node);
AVLNode *createNode(int value);
int balanceFactor(AVLNode *node);

#endif