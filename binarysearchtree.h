//***************************************************************************
//
// Jose Barron
// Z02013735
// Fall 2023 CSCI 340 - PE1 Data Struct Algorithm Analysis
// Assignment 08: This program is intended to implement the existing
// BinaryTree class into the given BinarySearchTree class definitions.
// Due Date: 11/06/23
// I certify that this is my own work and where appropriate an extension
// of the starter code provided for the assignment.
//
//***************************************************************************

#include "btree.h"

#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

template <typename T>
class BinarySearchTree : public BinaryTree<T> 
{
public:
    void Insert(const T &x) { return _Insert(this->root,x); }      // inserts node with value x
    bool Search(const T &x) const { return _Search(this->root,x); } // searches leaf with value x
    bool Remove(const T &x) // removes leaf with value x
    {
        if( Search(x)) // If leave exist, then remove it
        {
            _Remove(this->root,x);
            return true;
        }
        return false;
    }
private:
    void _Insert(Node<T> *& r, const T &x) // private version of insert
    {
        if(r == nullptr) // Tree is empty so the x becomes the new root
        {
            r = new Node<T>(x);
        }
        else if ( x < r->data) // If value is less than the nodes value, it goes left
        {
            _Insert(r->left,x);
        }
        else if ( x > r->data) // If value is more than the nodes value, it goes right
        {
            _Insert(r->right,x);
        }
    }
    bool _Search(Node<T> * r, const T &x) const // private version of search
    {
        if(r == nullptr) // Tree is empty so node cannot exist
        {
            return false;
        }
        else if(r->data == x && _Leaf(r)) // If the value is found and the node is a leaf
        {
            return true;
        }
        else
        {
            bool left = _Search(r->left,x); // Searches left tree
            bool right = _Search(r->right,x); // Searches right tree
            return left || right; // Returns the results of both trees
        }
    }
    void _Remove(Node<T> *& r, const T &x) // private version of remove
    {
        if(r == nullptr) // If the node is deleted then stop 
        {
            return;
        }
        else if(r->data == x) // If the desired value is found, delete node
        {
            delete r;
            r = nullptr; // ensures the function can stop
        }
        else
        {
            _Remove(r->left,x); // Removes the value if it is found in left tree
            _Remove(r->right,x); // Removes the value if it is found in right tree
        }
    }

    bool _Leaf(Node<T> *node) const // checks if node is leaf
    {
        return (node != nullptr) && (node->left == nullptr) && (node->right == nullptr);
    }
};

// put statements in header file

#endif // End of BINARYSEARCHTREE_H_
