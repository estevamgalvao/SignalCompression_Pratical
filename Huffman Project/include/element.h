/*
#ifndef ELEMENT_H
#define ELEMENT_H
*/
#include "TreeNode.h"
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