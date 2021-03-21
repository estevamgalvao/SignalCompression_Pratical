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
};

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
};

void CodeTree::PrintTree() {
    unsigned int count = 0;
    Node* aux_n = root_;

    std::cout << "Pretty-Tree Printer\n";
    std::cout << "===== Root =====\n";
    std::cout << "       " << aux_n->GetSymbol() << "\n";

    if (aux_n->left_ != NULL && aux_n->right_ != NULL) {
        std::cout << "     /   \\\n";
        std::cout << "    /     \\\n";
        std::cout << "   " << aux_n->left_->symbol_
                << "        "
                << aux_n->right_->symbol_ << "\n";
    }
    else if (aux_n->left_ != NULL) {
        std::cout << "     /\n";
        std::cout << "    /\n";
        std::cout << "   " << aux_n->left_->symbol_ << "\n";
    }
    else if (aux_n->right_ != NULL) {
        std::cout << "         \\\n";
        std::cout << "          \\\n";
        std::cout << "            "
                << aux_n->right_->symbol_ << "\n";
    }

    count++;
    char input;

    while(input != 'q') {
        std::cout << "Next move: ";
        std::cin >> input;

        switch (input)
        {
        case 'l':
            /* code */
            break;
        case 'r':

        case 'q':
        
        default:
            std::cout << "Invalid argument. Please, choose one from the followi"
            << "ng options:\n[l] - left node\n[r] - right node\n[q] - quit\n";
            std::cin >> input;

            break;
        }
    }




};
