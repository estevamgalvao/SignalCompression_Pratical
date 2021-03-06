/*
#ifndef ELEMENT_H
#define ELEMENT_H
*/

#include "Definitions.h"

class TreeNode {
    private:
        TreeNode *left_node;
        TreeNode *right_node;
        char symbol;
        u4 weight;

};

class CodeTree {
    private:
        TreeNode *root;
    
    public:
        void CodeTree(TreeNode *r_) {
            root = r_;
        }
        
        void build(TreeNode *n_) {}


}