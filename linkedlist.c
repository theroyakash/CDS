#include <stdio.h>
#include <stdlib.h>

struct LinkedListNode{
    int value;
    struct LinkedListNode *next;
};

typedef struct LinkedListNode LinkedListNode;


void printll(LinkedListNode *nodeBase){
    while ((*nodeBase).next != NULL) {
        printf("--> %d ", (*nodeBase).value);
        nodeBase = nodeBase -> next;
    }
    
    printf("--> %d ", (*nodeBase).value);
    printf("--> NULL\n");
    
}

// Adds new node at the begining and returns a pointer to the new head
LinkedListNode *addNodeAtBegining(LinkedListNode *currentHead, int value){
    
    LinkedListNode *new = (LinkedListNode *) malloc(sizeof(LinkedListNode));
    
    new -> value = value;
    new -> next = currentHead;
    currentHead = new;
    
    return currentHead;
}


// Adds new node at the end and returns the tail pointer
LinkedListNode *addNodeAtEnd(LinkedListNode *head, int value){
    
    LinkedListNode *new = (LinkedListNode *) malloc(sizeof(LinkedListNode));
    
    // Define the last node
    new -> value = value;
    new -> next = NULL;
    
    // add the node at the end
    
    while (head -> next != NULL) {
        head = head -> next;
    }
    
    head -> next = new;
    
    return new;
}

// Delete the head node from the linked list, return the new head
LinkedListNode *deleteHeadNode(LinkedListNode *head){
    
    if (head == NULL) {
        return NULL;
    }
    
    if (head -> next == NULL) {
        free(head);
        return NULL;
    }
    
    LinkedListNode *node = head;
    head = head -> next;
    
    free(node);
    return head;
}


int main(){
    
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
    printll(newHead);
    
    newHead = deleteHeadNode(newHead);
    newHead = deleteHeadNode(newHead);
    
    printf("After deleting 2 Heads\n");
    printll(newHead);
    
    return 0;
}
