/** @file tree.h
 *  @brief Function prototypes for stacks implemented with arrays.
 *
 *  This contains the prototypes for for stacks implemented with arrays,
 *  every utility function for a stacks you will ever need.
 *
 *  @author theroyakash
 *  @bug No known bugs.
 */

#ifndef STACKS
#define STACKS

#include <stdio.h>
#include <stdbool.h>

struct Stack{
    int size;
    // Stack Bucket is the place where stack elements are stored
    int *stackBucket;
};

/*
Basic Operations on a Stack
    - push(): Add an element to the top of a stack
    - pop(): Remove an element from the top of a stack
    - isEmpty(): Check if the stack is empty
    - isFull(): Check if the stack is full
    - peek(): Get the value of the top element without removing it
*/


typedef struct Stack Stack;
bool isEmpty(Stack *stack);
bool isFull(Stack *stack);

void push(int element);
int pop(Stack *stack);
int peek(Stack *stack);

#endif /* STACKS */