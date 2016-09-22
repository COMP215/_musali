//
//  LinkedList.h
//  Lab4
//
//  Created by Phuntsho Norbu on 9/21/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#ifndef __Lab4__LinkedList__
#define __Lab4__LinkedList__

#include <stdio.h>
#include <iostream>
using namespace std;

class LinkedListNode
{
public:
    LinkedListNode(string);
    LinkedListNode* next_;
    string data_;

};
//------------------------------------

class LinkedList
{
public:
    bool Insert(string);
    LinkedList();
    bool Search(string);
    LinkedListNode* tail_;
    
private:
    LinkedListNode* head_;
};

#endif /* defined(__Lab4__LinkedList__) */
