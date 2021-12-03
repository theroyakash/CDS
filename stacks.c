#include <stdio.h>
#include <stdlib.h>
#include "stacks.h"

/*
Basic Operations on a Stack
    - push(): Add an element to the top of a stack
    - pop(): Remove an element from the top of a stack
    - isEmpty(): Check if the stack is empty
    - isFull(): Check if the stack is full
    - peek(): Get the value of the top element without removing it
*/

Stack *initializeStack(){
    Stack *stk = (Stack *) malloc(sizeof(Stack));
    (*stk).size = 0;
    (*stk).topOfTheStack = -1;
    return stk;
}


Stack *push(Stack *stack, int val){
    if ((*stack).size == MAXSIZE - 1){
        return NULL;
    }else{
        // Push the value in stack and add size
        uint16_t tos = (*stack).topOfTheStack++;
        stack->st[tos] = val;
        (*stack).size++;
    }

    return stack;
}
