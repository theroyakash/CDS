#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


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

// Double order traversal: print every node twice.
void doubleOrderTraversal(TreeNode *basePointer){
    if (basePointer != NULL) {

        printf("%c", basePointer -> data);
        doubleOrderTraversal(basePointer -> left);
        printf("%c", basePointer -> data);
        doubleOrderTraversal(basePointer -> right);
    }
}

// count and return the number of nodes in the BT

long int countNodes(TreeNode *head){
    if (head != NULL) {
        return (1 + countNodes(head -> left) + countNodes(head -> right));
    } else {
        return 0;
    }
}

/**
 *	Function:  countFullNodes
 *	@brief Count number of leafs in Binary tree
 *
 * 	@param head: (TreeNode *) pointer to the head of the tree / root of the subtree
 *
 *  @return: (long int) the number of leafs in the tree / the subtree
 */
long int leafs(TreeNode *head){

    if (head) {
        if (head -> left == NULL && head -> right == NULL) {
            return 1;
        } else {
            return leafs(head -> left) + leafs(head -> right);
        }
    }

    else{
        return 0;
    }
}

/**
 *	Function:  max
 *	@brief computes the maximum value between two numbers
 *
 * 	@param a: (long int)
 *  @param b: (long int)
 *
 *  @return: (long int) the maximum between two numbers a and b
 */
long int max(long int a, long int b){
    return (a>b)? a: b;
}


/**
 *	Function:  treeDepth
 *	@brief Find the height of the tree
 *
 * 	@param head: (TreeNode *) pointer to the head of the tree / or any other node
 *
 *  @return: (long int) the height of the tree
 */
long int treeDepth(TreeNode *head){

    if (head) {
        if (head -> right == NULL && head -> left == NULL) {
            return 0;
        }else{
            return 1+ max(treeDepth(head -> left), treeDepth(head -> right));
        }
    }else{
        return 0;
    }

}


/**
 *	Function:  countFullNodes
 *	@brief Count the number of FULL NODES that has both children
 *
 * 	@param head: (TreeNode *) pointer to the head of the tree
 *
 *  @return: (long int) the number of FULL NODES
 */
long int countFullNodes(TreeNode *head){

    if (head){
        if (head -> right == NULL && head -> left == NULL) {
            return 0;
        }else{
            return countFullNodes(head -> left) + countFullNodes(head -> right) + ((head -> left && head -> right)? 1: 0);
        }
    }

    else{
        return 0;
    }
}

/**
 *	Function:  checkCompleteness
 *	@brief Returns the completeness of the binary tree.
 *
 * 	@param head: (TreeNode *) pointer to the head of the tree
 *
 *  @return: (int) 1 -> for True and 0 -> for False.
 */
int checkCompleteness(TreeNode *head){
    if (head){
        if (head->left == NULL && head->right == NULL){
            return 1;
        }else if (head->left != NULL && head->right != NULL){
            return checkCompleteness(head->left) && checkCompleteness(head->right);
        }else{
            return 0;
        }

    }else{
        return 1;
    }
}
