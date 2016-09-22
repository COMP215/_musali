////
////  Tree.cpp
////  Lab(01) LinkedList
////
////  Created by Phuntsho Norbu on 9/14/16.
////  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
////
//
#include "Tree.h"
#include "Node.h"
#include <assert.h>
#include <time.h>
#include <iostream> 
#include <queue>
//---------------------------------------------------------------------------------------------------
Tree::Tree()
{   root = new Node;
    root->info = 15;
   // return root->info;
}

//----------------------------------------------------------------------------------------------------
void Tree::insert_to_tree(int data)
{       
    newNode= new Node;
    newNode-> info = data;
    assert (newNode != NULL);
    newNode->left= NULL;
    newNode->right = NULL;
    
    if (root == NULL)
    {
        root = newNode;
        cout << root->info;// << "newNode has been made the root"<<endl;
    }
    else
    {   //current = new Node;
        current = root;
        Node* trailcurrent= new Node;
        //---------------------------------------------------
        while (current!= NULL)
        {   trailcurrent = current;
            //------------------------------------------------------------------|
            if (newNode->info == current->info)                          //     |
              {   cout << "They are the same number, cannot insert it"<<endl;// |=>working well. 
                  return;     }                                              // |
            //-------------------------------------------------------------------
            
            else if( newNode ->info < current->info )
            {   current = current->left;}
                //cout << "left added" << data << endl; }
            
            else{
                current = current->right;}
                 //cout << "right added"<< data << endl; }
        }//-------------------------------------------------
        
        if (newNode ->info < trailcurrent->info)
        {   trailcurrent->left = newNode; cout << "left:         "<<data <<endl; }
        else
        { trailcurrent->right = newNode; cout  << "right:        "<<data<<endl;}        }       }

//-------------------------------------------------------------------------------------------------------------

void Tree::inordertraversel(Node*)
{

}


























