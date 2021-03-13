#include "CodeTree.h"

Node::Node(char c, u4 w, Node *l, Node *r) {
//Node::Node(char c, u4 w) {
    symbol_ = c;
    weight_ = w;
    left_ = l;
    right_ = r;
    i_am_leaf_ = false;
};

bool Node::AmILeaf() {
    return i_am_leaf_;
};

Node* Node::GetLeftNode() {
    return left_;
};

Node* Node::GetRightNode() {
    return right_;
};

void Node::SetLeftNode(Node *n) {
    left_ = n;
};

void Node::SetRightNode(Node *n) {
    right_ = n;
}