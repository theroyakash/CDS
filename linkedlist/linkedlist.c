#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


typedef struct LinkedListNode LinkedListNode;


void PRETTY_PRINT_LL(LinkedListNode *nodeBase){
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
