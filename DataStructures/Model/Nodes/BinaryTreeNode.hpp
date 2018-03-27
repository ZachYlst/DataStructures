//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Ylst, Zachary on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <assert.h>
#include <iostream>
#include "Node.hpp"

template <class Type>
class BinaryTreeNode
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    getRoot();
    getLeft();
    getRight();
    
    void setRoot(BinaryTreeNode<Type> *);
    void setLeft(BinaryTreeNode<Type> *);
    void setRight(BinaryTreeNode<Type> *);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode<Type data>
{
    
}

template <class Type>
BinaryTreeNode<Type> :: getRoot()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: getLeft()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: getRight()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> *)
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setLeft(BinaryTreeNode<Type> *)
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setRight(BinaryTreeNode<Type> *)
{
    
}

#endif /* BinaryTreeNode_hpp */
