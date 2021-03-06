#ifndef CODETREE_H
#define CODETREE_H

#include "Definitions.h"

class Node {
    
    private:
        char symbol_;
        Node *left_;
        Node *right_;
        bool i_am_leaf_;

        friend class CodeTree;
    
    public:
        unsigned int weight_;

        //Node(char c, u4 w);
        Node(char c, unsigned int w, Node *l = NULL, Node *r = NULL);
        bool AmILeaf();
        void SetLeaf(bool x);
        Node* GetLeftNode();
        Node* GetRightNode();
        char GetSymbol();
        void SetLeftNode(Node *n);
        void SetRightNode(Node *n);
        void DeleteLeft(Node *f);
        void DeleteRight(Node *f);
        void PrintNode();

};


class CodeTree {
    private:
        Node *root_;

    public:
        CodeTree(Node *r);
        Node* Link(Node *n1, Node *n2); // get two nodes and give them a father
        void PrintTree();
        Node* GetFather(Node *r, std::vector<u1>);




};

#endif