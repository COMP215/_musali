//
//  main.h
//  Graph
//
//  Created by Khadija Ali on 10/16/16.
//  Copyright (c) 2016 Musa Ali. All rights reserved.
//

#ifndef __Graph__main__
#define __Graph__main__

#include <stdio.h>

#include <vector>
#include <iostream>
using namespace std;

class Node
{
public:
    string name_;
    vector <Node> edges;
    Node();
    Node(string passed_name);
    void addEdges(Node* newEdge);
};


class Graph
{
public:
    Graph();
    void addToGraph(string vertex,string edge);
    void To_Graph_Viz(string file_name);
    vector <Node> vertices;
};
#endif /* defined(__Graph__main__) */
