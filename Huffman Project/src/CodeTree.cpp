#include "CodeTree.h"

Node::Node(char c, unsigned int w, Node *l, Node *r) {
//Node::Node(char c, u4 w) {
    symbol_ = c;
    weight_ = w;
    left_ = l;
    right_ = r;
    i_am_leaf_ = true;
};

bool Node::AmILeaf() {
    return i_am_leaf_;
};

void Node::SetLeaf(bool x) {
    i_am_leaf_ = x;
};

Node* Node::GetLeftNode() {
    return left_;
};

Node* Node::GetRightNode() {
    return right_;
};

char Node::GetSymbol() {
    return symbol_;
}

void Node::SetLeftNode(Node *n) {
    left_ = n;
};

void Node::SetRightNode(Node *n) {
    right_ = n;
};

/* To do
    void DeleteLeft(Node *f);
    void DeleteRight(Node *f);
*/

CodeTree::CodeTree(Node *r) {
    root_ = r;
}

