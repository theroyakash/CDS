#include <stdio.h>
#include <stdlib.h>
#include "linkedlist/linkedlist.h"
#include "tree/tree.h"


int main(){

    printf("|--------------------------------|\n");
    printf("|-----------LINKED_LIST----------|\n");
    printf("|--------------------------------|\n");

    LinkedListNode n1, n2, n3;
    
    n1.value = 10;
    n1.next = &n2;
    
    n2.value = 22;
    n2.next = &n3;
    
    n3.value = 67;
    n3.next = NULL;
    
    LinkedListNode *newHead = addNodeAtBegining(&n1, 176);
    
    newHead = addNodeAtBegining(&n1, 176);
    newHead = addNodeAtBegining(newHead, 44);
    newHead = addNodeAtBegining(newHead, 16);
    newHead = addNodeAtBegining(newHead, 51);
    newHead = addNodeAtBegining(newHead, 753);
    
    addNodeAtEnd(newHead, 88);
    addNodeAtEnd(newHead, 34);
    addNodeAtEnd(newHead, 55);
    
    printf("Before Deleting 2 heads\n");
    PRETTY_PRINT_LL(newHead);
    
    newHead = deleteHeadNode(newHead);
    newHead = deleteHeadNode(newHead);
    
    printf("After deleting 2 Heads\n");
    PRETTY_PRINT_LL(newHead);

    printf("|--------------------------------|\n");
    printf("|--------------TREE--------------|\n");
    printf("|--------------------------------|\n");

    TreeNode tn1, tn2, tn3;

	tn1.data = 'A';
	tn2.data = 'B';
	tn3.data = 'C';

	TreeNode tn4 = {'D', NULL, NULL};
	TreeNode tn5 = {'E', NULL, NULL};

	tn1.left = &tn2;
	tn1.right = &tn3;

	tn2.left = &tn5;
	tn2.right = &tn4;

	tn3.left = NULL;
	tn3.right = NULL;

	printf("In Order: ");
	inOrderTraversal(&tn1);
	printf("\n");
	printf("Pre Order: ");
	preOrderTraversal(&tn1);
	printf("\n");
	printf("Post Order: ");
	postOrderTraversal(&tn1);
	printf("\n");
	printf("Double Order: ");
	doubleOrderTraversal(&tn1);


	printf("\nNumber of nodes in the tree is %ld\n", countNodes(&tn1));

	printf("Number of Leafs in the tree is %ld\n", leafs(&tn1));
	printf("Number of full nodes in the tree is %ld\n", countFullNodes(&tn1));

	printf("Tree Depth is %ld\n", treeDepth(&tn1));

	printf("Checking for completeness: %d\n", checkCompleteness(&tn1));
    
    return 0;
}
