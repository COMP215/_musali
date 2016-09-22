////
////  Tree.h
////  Lab(01) LinkedList
////
////  Created by Phuntsho Norbu on 9/14/16.
////  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
////
//
#ifndef __Lab_01__LinkedList__Tree__
#define __Lab_01__LinkedList__Tree__
#include "Node.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------------------------
class Tree
{
public:
    Tree();
    void insert_to_tree(int data);
    Node* current;
    Node* newNode;
    void inordertraversel( Node*);
private:
    Node* root;
    
};










#endif /* defined(__Lab_01__LinkedList__Tree__) */
