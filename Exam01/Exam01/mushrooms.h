//
//  mushrooms.h
//  Exam01
//
//  Created by Khadija Ali on 10/24/16.
//  Copyright (c) 2016 Musa Ali. All rights reserved.
//

#ifndef __Exam01__mushrooms__
#define __Exam01__mushrooms__

#include <stdio.h>
#ifndef Lab05_graph_h
#define Lab05_graph_h

/* THIS IS LAB 5 */

#include <string>
#include <iostream>

using namespace std;
#define ROW 5
#define COL 5

class mushroom
{
public:
    mushroom();
    mushroom(std::string, std::string, int w, int p);
    std::string name_;
    std::string science_name_;
    int quantity_;
    int price_;
};

class edge
{
public:
    edge();
    edge(mushroom* n1, mushroom* n2);
    edge(mushroom* n1, mushroom* n2, int w);
    mushroom* n1_;
    mushroom* n2_;
    int weight;
};

class satchel
{
    int graph[ROW][COL], mushrooms;
public:
    satchel();
    edge* ep_;
    int hmrep_;
    mushroom* np_;
    int hmrnp_;
    bool add_mushroom(std::string, std::string, int quantity, int price);
    bool add_edge(mushroom* np_1, mushroom np_2);
   // friend std::ostream& operator<<(std::ostream&, satchel);
    void Mushroom_MST();
    void createGraph();
    
};


#endif
#endif /* defined(__Exam01__mushrooms__) */
