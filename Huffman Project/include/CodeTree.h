
#ifndef CODETREE_H
#define CODETREE_H

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
        CodeTree(TreeNode *r_) {
            root = r_;
        }
        
        void build(TreeNode *n_) {}


};

#endif