//
//  Node.h
//  Lab(01) LinkedList
//
//  Created by Phuntsho Norbu on 9/13/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Lab_01__LinkedList__Node__
#define __Lab_01__LinkedList__Node__

#include <stdio.h>
#include <iostream> 
#include <string> 

//#include "constant.h"
using namespace std;
class Node
{
public:
    Node(); 
    void insertnode(int data);
    //----------------------------
    
    string info;
    Node *link;
    Node* last;
    Node* newNode;
    //----------------------------
    void appendleft(Node*);
    void appendright(Node*);
    Node* leftchild();
    Node* rightchild();
    Node* left;
    Node* right;

private:
        Node* first;
};

#endif /* defined(__Lab_01__LinkedList__Node__) */
