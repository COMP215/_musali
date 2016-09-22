//
//  BinarySearchTree.h
//  Lab4
//
//  Created by Phuntsho Norbu on 9/21/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Lab4__BinarySearchTree__
#define __Lab4__BinarySearchTree__


#include <stdio.h>
#include <string>
using namespace std;
class Node
{
public:
    string data_;
    Node* left_;
    Node* right_;
    Node(string);
};


class BinarySearchTree
{
private:
    Node* root_;
    
public:
    BinarySearchTree();
    bool Insert(string);
    void InOrder();
    void InOrder(Node*);
    bool Search(string search_value);
};



#endif /* defined(__Lab4__BinarySearchTree__) */
