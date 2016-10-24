//
//  mushrooms.cpp
//  Exam01
//
//  Created by Khadija Ali on 10/24/16.
//  Copyright (c) 2016 Musa Ali. All rights reserved.
//

#include "mushrooms.h"

using namespace std;

mushroom::mushroom(std::string name1, std::string name2, int w, int p)
{
    name_ = name1;
    science_name_= name2;
    quantity_ = w;
    price_ = p;
}

mushroom::mushroom()
{
    name_ = "\0";
    science_name_ = "/0";
    quantity_ = 0;
    price_ = 0;
}

edge::edge()
{
    n1_ = 0;
    n2_ = 0;
    weight = 1;
}

edge::edge(mushroom* n1, mushroom* n2)
{
    n1_ = n1;
    n2_ = n2;
}
edge::edge(mushroom* n1, mushroom* n2, int w)
{
    n1_ = n1;
    n2_ = n2;
    weight = w;
}
satchel::satchel()
{

    ep_ = new edge[5];
    hmrep_ = 0;
    np_ = new mushroom[5];
    hmrnp_ = 0;

}

bool satchel::add_mushroom(std::string name, string name2, int w, int p )
{
    mushroom new_mushroom = mushroom(name,name2,w,p);
    np_[hmrnp_] = new_mushroom;
    hmrnp_++;
    
    return true;
}

bool satchel::add_edge(mushroom* np_1, mushroom np_2);
{
    edge A = edge(n1,n2);
    if (hmrep_ > 5){

        ep_[hmrep_] = A;
        hmrep_++;
    }
    else{
        edge* old_array = ep_;
        ep_ = new edge[hmrep_ * 2];
        for (short i = 0; i < hmrep_ ; i++)
        {
            ep_[i] = old_array[i];
        }
        delete old_array;
        ep_[hmrep_] = A;
        hmrnp_++;
    }
    return true;
}

bool satchel::add_edge(std::string n1_name, std::string n2_name, int w)
{
    mushroom* n1 = nullptr;
    mushroom* n2 = nullptr;
    
    for (short i = 0; i < hmrnp_ ; i++)
    {
        if (n1_name == (np_[i].name_))
            n1 = &np_[i];
        if (n2_name == (np_[i].name_))
            n2 = &np_[i];
        
    }
    if (n1 && n2)
    {
        edge new_edge= edge(n1,n2,w);
        ep_[hmrep_] = new_edge;
        hmrep_++;
        
    }
    
    return true;
}

void satchel::createGraph()
{
    ifstream inputFile("mushrooms_1.csv");
    string line_;
    
    string common_name_;
    string science_name_;
    string str_ounces_, str_prices_;
    
    while (getline(inputFile, line_))
    {
        stringstream linestream(line_);
        
        getline(linestream, common_name_, ',');
        getline(linestream, science_name_, ',');
        getline(linestream, str_ounces_, ',');
        getline(linestream, str_prices_, ',');
        
        int ounces = stoi(str_ounces_);
        int prices = stoi(str_ounces_);
        
        for(int i =0; i<hmrep_;i++)
        {
            for(int j=0;j<hmrep_;j++)
            {
                for(int k=0;k<hmrep_;k++)
                {
                    for(int r=0;k<hmrep_;r++)
                    {
                        satchel[i=common_name][j=science_name_][k=ounces][r=prices];
                    }
                }
            }
        }
    }
    
    for (r=0; r<nodes;r++)
    {
        if satchel[i][j][k][r] == 0
        {
            satchel[i][j][k][r] == INF;
        }
    }
    
    
    
}

void satchel::primsAlgo()
{
    int selected[ROW],i,j,ne; //ne for no. of edges
    int min,x,y;
    
    for(i=0;i<nodes;i++)
        selected[i]=false;
    
    selected[0]=true;
    ne=0;
    
    while(ne < nodes-1)
    {
        min=0;
        for(i=0;i<nodes;i++)
        {
            if(selected[i]==true)
            {
                for(j=0;j<nodes;j++)
                {
                    if(selected[j]==false)
                    {
                        if(min > satchel[k][r])
                        {
                            min=satchel[k][r];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        selected[y]=true;
        cout<<"n"<<x+1<<" --> "<<y+1;
        ne=ne+1;
        
        co
    }
}