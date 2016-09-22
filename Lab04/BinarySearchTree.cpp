//
//  BinarySearchTree.cpp
//  Lab4
//
//  Created by Phuntsho Norbu on 9/21/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include "BinarySearchTree.h"
#include <iostream>
#include <string>
using namespace std;

Node::Node(string data)
{   data_ = data;
    left_ = NULL;
    right_ = NULL;      }

//-------------------------------------------------------------------------------------------

BinarySearchTree::BinarySearchTree()
{   root_ = NULL;       }

//--------------------------------------------------------------------------------------------

bool BinarySearchTree::Insert(string data) {
    if (root_ == NULL)// Empty tree, make a root
    {   root_ = new Node(data);
        return true;        }
    
    else
    {   Node* current = root_;   // Non-empty tree, find correct position for data
        while (current != NULL)
        {   if (data == current->data_) // Data already in tree, fail to insert
            {   return false;   }
            
            else if (data < current->data_)// Lexicographically lesser, find location to the left
            {   if (current->left_ == NULL)
                {   current->left_ = new Node(data);
                    return true;    }
                else
                    current = current->left_; }
                
            else // Lexicographically greater, find location to the right
                {   if (current->right_ == NULL)
                    {   current->right_ = new Node(data);
                        return true;    }
                    else
                        current = current->right_;
                
            }
        }
    }   return false;
}
//-----------------------------------------------------------------------------------------------

bool BinarySearchTree::Search(string search_value)
{   Node* current = root_;
    while (current != NULL)// current moves to either to next left or right node until the value is found.
    {   if (search_value < current->data_)
            current = current->left_;
        
        else if (search_value > current->data_)
            current = current->right_;
        
        else return true;   }
    
    return false;   }
//------------------------------------------------------------------------------------------------

void BinarySearchTree::InOrder()
{   if (root_ != NULL)
        InOrder(root_);     }

//------------------------------------------------------------------------------------------------
void BinarySearchTree::InOrder(Node* node) {
    if (node->left_ != NULL)
        InOrder(node->left_); //recursion to the left of the root node
    
    cout << node->data_ << endl;
    
    if (node->right_ != NULL) // recursion to the right of the root node.
        InOrder(node->right_);
    
}
//--------------------------------------------------------------------------------------------


