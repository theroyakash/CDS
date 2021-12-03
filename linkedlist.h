#ifndef LINKEDLIST
#define LINKEDLIST

struct LinkedListNode{
    int value;
    struct LinkedListNode *next;
};

typedef struct LinkedListNode LinkedListNode;

void PRETTY_PRINT_LL(LinkedListNode *nodeBase);
LinkedListNode *addNodeAtBegining(LinkedListNode *currentHead, int value);
LinkedListNode *addNodeAtEnd(LinkedListNode *head, int value);
LinkedListNode *deleteHeadNode(LinkedListNode *head);


#endif