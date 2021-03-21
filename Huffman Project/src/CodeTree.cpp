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

void Node::PrintNode() {
    std::cout << "       " << this->symbol_ << "\n";

    if (this->left_ != NULL && this->right_ != NULL) {
        std::cout << "     /   \\\n";
        std::cout << "    /     \\\n";
        std::cout << "   " << this->left_->symbol_
                << "        "
                << this->right_->symbol_ << "\n";
    }
    else if (this->left_ != NULL) {
        std::cout << "     /\n";
        std::cout << "    /\n";
        std::cout << "   " << this->left_->symbol_ << "\n";
    }
    else if (this->right_ != NULL) {
        std::cout << "         \\\n";
        std::cout << "          \\\n";
        std::cout << "            "
                << this->right_->symbol_ << "\n";
    }
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
};

void CodeTree::PrintTree() {
    unsigned int count = 0;
    Node* aux_n = root_;

    std::cout << "Pretty-Tree Printer\n";
    std::cout << "===== Root =====\n";
    aux_n->PrintNode();

    count++;
    char input, ret;

    while(input != 'q') {
        std::cout << "\nNext move: ";
        std::cin >> input;

        switch (input)
        {
        case 'l':
            if (aux_n->left_ != NULL) {
                aux_n = aux_n->left_;
                std::cout << "\n\n===== Step [" << count << "] =====\n";
                aux_n->PrintNode();
            }
            else {
                std::cout << "No left node remaining.\nReturn to root? [y/n]\n";
                std::cin >> ret;

                if (ret == 'y') {
                    std::cout << "\n\n===== Root =====\n";
                    aux_n = root_;
                    aux_n->PrintNode();
                    count = 0;
                }
                else {
                    input = 'q';
                }
            }
            break;
        case 'r':
            if (aux_n->right_ != NULL) {
                aux_n = aux_n->right_;
                std::cout << "\n\n===== Step [" << count << "] =====\n";
                aux_n->PrintNode();
            }
            else {
                std::cout << "No right node remaining.\nReturn to root? [y/n]\n";
                std::cin >> ret;

                if (ret == 'y') {
                    std::cout << "\n\n===== Root =====\n";
                    aux_n = root_;
                    aux_n->PrintNode();
                    count = 0;
                }
                else {
                    input = 'q';
                }
            }
            break;
        case 'q':
            break;
        
        default:
            std::cout << "Invalid argument. Please, choose one from the followi"
            << "ng options:\n[l] - left node\n[r] - right node\n[q] - quit\n";
            std::cin >> input;

            break;
        }
    }




};
