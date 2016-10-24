//
//  main.cpp
//  
//
//  Created by Khadija Ali on 10/16/16.
//
//

#include <stdio.h>
#include "graph.h"

using namespace std;

int main()
{
    Graph mygraph;
    mygraph.addToGraph("a","b");
    mygraph.addToGraph("a","c", 1);
    mygraph.addToGraph("d","g", 3);
    mygraph.addToGraph("c","b");
    mygraph.addToGraph("a","g");
    
    mygraph.To_Graph_Viz("graph1.dot");
}