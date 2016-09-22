//
//  LinkedList.cpp
//  Lab4
//  Created by Phuntsho Norbu on 9/21/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include "LinkedList.h"
using namespace std;

LinkedListNode::LinkedListNode(string data)
{   data_ = data;
    next_ = NULL;   }
//-------------------------------------------------------------------------------------

LinkedList::LinkedList()
{   head_ = NULL;
    tail_ = NULL;   }

//-------------------------------------------------------------------------------------

bool LinkedList::Insert( string data)
{   if (head_ == NULL) //makes the new data passed as the head at the very beginning.
    {   LinkedListNode* newNode = new LinkedListNode(data);
        head_ = newNode;
        tail_ = newNode;
        return true;   }
    else    //add mores nodes after the tail node.
    {   LinkedListNode* newNode = new LinkedListNode(data);
        tail_->next_ = newNode;
        tail_ = newNode; 
        return true;    }
}
//-------------------------------------------------------------------------------------
bool LinkedList::Search(string data)
{   if  (head_!= NULL)
    {   LinkedListNode* newNode = new LinkedListNode(data);
        
        if (head_->data_ == newNode->data_)
            return true;
        
        else
        {   LinkedListNode* current = head_;
            while (current!= NULL) //keeping going through the all the nodes in the linked list until search value is found.
            {   if (current->data_ == data)
                    return true;
                else
                    current = current->next_;   }
        }
    }
    else
        cout << "couldn't find it,Sorry!"<<endl;
    return false;
}
//-------------------------------------------------------------------------------------