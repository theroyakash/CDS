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



int main(){


	TreeNode n1, n2, n3;

	n1.data = 'A';
	n2.data = 'B';
	n3.data = 'C';

	TreeNode n4 = {'D', NULL, NULL};
	TreeNode n5 = {'E', NULL, NULL};

	n1.left = &n2;
	n1.right = &n3;

	n2.left = &n5;
	n2.right = &n4;

	n3.left = NULL;
	n3.right = NULL;

	printf("In Order: ");
	inOrderTraversal(&n1);
	printf("\n");
	printf("Pre Order: ");
	preOrderTraversal(&n1);
	printf("\n");
	printf("Post Order: ");
	postOrderTraversal(&n1);
	printf("\n");
	printf("Double Order: ");
	doubleOrderTraversal(&n1);


	printf("\nNumber of nodes in the tree is %ld\n", countNodes(&n1));

	printf("Number of Leafs in the tree is %ld\n", leafs(&n1));
	printf("Number of full nodes in the tree is %ld\n", countFullNodes(&n1));

	printf("Tree Depth is %ld\n", treeDepth(&n1));

	return 0;
}
