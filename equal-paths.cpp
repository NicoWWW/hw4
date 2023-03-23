#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here

int findpathlength(Node* node);

bool equalPaths(Node * root)
{
    // Add your code below
     if (!root){
        return true;
    }
    if (root->left){
        if (root->right){
            return equalPaths(root->left) && equalPaths(root->right)&&(findpathlength(root->left)==findpathlength(root->right));
        }
        else{
            return equalPaths(root->left);
        }
    }
    else{
        if (root->right){
            return equalPaths(root->right);
        }
        else{
            return true;
        }
    }
}

int findpathlength(Node* node){
    if (!node){
        return 0;
    }
    else{
        int left = findpathlength(node->left);
        int right = findpathlength(node->right);
        if (left > right){
            return left+1;
        }
        else {
            return right+1;
        }
    }
}


