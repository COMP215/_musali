
//  main.cpp
//  Lab4
//  Created by Phuntsho Norbu on 9/21/16.
//  Copyright (c) 2016 Phuntsho Norbu. All rights reserved.
/*---------------------------------------------------------------------------------------------------------------------
SUMMARY: this program takes a file conatining random words and then inserts it in a linked list and Binary search tree. It then searches for words(reads it from another file) in the first file. 
    - The main aim of this program is to see which structure is fatser and better. 
INPUT: the program reads 2 .txt files conatining random words.
OUTPUT: Nothing.
*///--------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "BinarySearchTree.h"
#include "LinkedList.h"
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    BinarySearchTree* people_names = new BinarySearchTree();
    LinkedList *newLinkedList = new LinkedList();
    string words,data;
    ifstream infile,file;
    
    infile.open ("foowords.txt");
    while(!infile.eof()) // runs till there is no more lines.
    {
        infile >> words; // stores the words from the file as words.
        people_names->Insert(words);
        newLinkedList->Insert(words);   }
    
    infile.close();

    file.open ("words.txt");
    while(!file.eof()) // runs till you run out of lines.
    {
        file >> data;
        newLinkedList->Search(data);
        people_names->Search(data);     }
    
    file.close();
    
    cout << "Done";
    return 0;


}
