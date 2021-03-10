#ifndef ELEMENT_H
#define ELEMENT_H

#include "CodeTree.h"
#include "Definitions.h"

//! \class Element
/*! 
   \brief Element wich will help us to build the Code Tree holding the fusion
   references.
 */

class Element {
    private:
        char symbol;
        u4 freq;
        TreeNode *ref;
    
    public:
        Element(char s_, u4 f_, TreeNode *r_ = NULL) {
            symbol = s_;
            freq = f_;
            ref = r_;
        }

};

class ElementVector : std::vector<Element> {
    public:
        TreeNode Fusion(Element e1_, Element e2_) {}
};

#endif