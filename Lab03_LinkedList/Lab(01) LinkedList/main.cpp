//
//  main.cpp
//  Lab(01) LinkedList
//
//  Created by Phuntsho Norbu on 9/12/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
//

#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <time.h>
using namespace std;

int main()
//{   Node N;
//    srand(NULL);
//    string letter = "ABCDEFGHIJKLMNO";
//        string name= " ";
//        name = letter [rand()%10];
//        N.insertnode(name);
//    
//        name = letter [rand()%4];
//        N.insertnode(name);
{
Tree T;
    srand(time(NULL));
    
    
    int  data = 10;
    T.insert_to_tree(data);
    int data1 = 17;
    T.insert_to_tree(data1);
    int data2 = 9;
    T.insert_to_tree(data2);
    int data3 = 18;
    T.insert_to_tree(data3);
    int data4 = 8;
    T.insert_to_tree(data4);
    int data5 = 11;
    T.insert_to_tree(data5);


    cout << endl<<endl<<endl;
    cout << "THE INORDER TRAVERSAL IS: 8,9,10,11,15,18,17"<<endl;
    cout << endl<<endl<<endl;
    
    

    
}
