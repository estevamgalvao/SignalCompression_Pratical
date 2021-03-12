#ifndef CODETREE_H
#define CODETREE_H

#include "Definitions.h"

class Node {
    private:
        char symbol_;
        u4 weight_;
        Node *left_;
        Node *right_;
        bool i_am_leaf_;

    public:
        Node();
        bool AmILeaf();
        Node* GetLeftNode();
        Node* GetRightNode();
        void DeleteLeft(Node *f);
        void DeleteRight(Node *f);
};


class CodeTree {
    private:
        Node *root_;

    public:
        CodeTree(Node *r);
        Node* Link(Node *n1, Node *n2); // get two nodes and give them a father
        void PrintTree(Node *r);
        Node* GetFather(Node *r, std::vector<u1>);




};

#endif