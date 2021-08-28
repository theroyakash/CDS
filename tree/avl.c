#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct AVLNode {
    int value;
    struct AVLNode *left;
    struct AVLNode *right;
    int height;
};

typedef struct AVLNode AVLNode;

// Heights of the Tree structure strting from a given node
long int height(AVLNode *node){
    if (node){
        return node->height;
    }else{
        return 0;
    }
}

// Create Node API. Create a new AVLNode and return a pointer to its location.
AVLNode *createNode(int value){
    AVLNode *new = (AVLNode *) malloc(sizeof(AVLNode));
    
    // set the values
    new -> value = value;
    new -> right = NULL;
    new -> left = NULL;
    new -> height = 1;

    return new;
}

// Balance Factor calculation
int balanceFactor(AVLNode *node){
    if (node == NULL){
        return 0;
    }

    return height(node -> left) - height(node -> right);   
}

// AVL Rotation APIs
