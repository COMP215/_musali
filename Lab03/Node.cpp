//
//  Node.cpp
//  Lab(01) LinkedList
//
//  Created by Phuntsho Norbu on 9/13/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include "Node.h"
#include <iostream>
#include <stdio.h>
#include <stack>

//-----------------------------------------------------------------------------
Node::Node()
{   //this ->head;
    //this->head = first;
    first = NULL;
    last = NULL;    }

//-----------------------------------------------------------------------------
void Node::insertnode(int data)
{  newNode = new Node;
   newNode->info = data;
   newNode->link = NULL;

    if (first == NULL)
    {   first = newNode;
        last = newNode;
        cout << "the value is;"<<newNode->info << endl;    }
    else
    {   last->link = newNode;
        last=newNode;
        cout << "the values is:"<< newNode->info << endl;  }

    //cout << this->head;
}

//-----------------------------------------------------------------------------
void Node::appendleft(Node* node)
{   this->left = node;      }
//-----------------------------------------------------------------------------
void Node::appendright(Node* node)
{   this->right = node;     }
//-----------------------------------------------------------------------------
Node* Node::leftchild()
{   if (this->left != NULL)
        return (left->link);
    else
        return NULL;    }
//-----------------------------------------------------------------------------
Node* Node::rightchild()
{   if (this->right != NULL)
    return (right->link);
else
    return NULL;    }
//-----------------------------------------------------------------------------






