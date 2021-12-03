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

#include <stdbool.h>

#define MAXSIZE 1000 // Change this value to change the stack

struct stack{
    int st[MAXSIZE];
    u_int16_t size;
    int topOfTheStack;
};

typedef struct stack Stack;

// Implementable functions
Stack *push(Stack *stack, int val);
int pop(Stack *stack);
int peek(Stack *stack);
void show(Stack *stack);
bool isEmpty(Stack *stack);

#endif /* STACKS */