#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

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

// Count number of leafs in BT

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

long int max(long int a, long int b){
	return (a>b)? a: b;
}


// Find the height of the tree

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


// Count the number of FULL NODES --> has both children

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

// Returns the completeness of the binary tree. 1 -> for True and 0 -> for False.
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
