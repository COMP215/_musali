//
//  main.cpp
//  Exam01
//
//  Created by Khadija Ali on 10/24/16.
//  Copyright (c) 2016 Musa Ali. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>



using namespace std;

int main() {
    
    
    //open file with ifstream (with full path)
    ifstream inputFile("mushrooms.csv");
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
    
        cout << ounces << prices << endl;
        
        
    }
    
        

}