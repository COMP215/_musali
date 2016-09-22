//
//  main.cpp
//  Lab01
//
//  Created by Khadija Ali on 8/30/16.
//  Copyright (c) 2016 Musa Ali. All rights reserved.
//

#include <iostream>
#include "ctime"
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//===================================================================================================
const string allCharacters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
static const int MAX = 10000;
string StringList[MAX];
void WordGenerator(int strings, int stringLength);
void SortWords( int strings, int stringLength);

//===================================================================================================

void WordGenerator (int strings, int stringLength)
{
    ofstream outfile("outfile.txt");
    srand(time(NULL));
    
    for( short i = 0; i < strings; i++)
    {
        string newWord = " ";
        for(short i = 0; i< stringLength; i++)
        {
            int t = rand();
            newWord = newWord + (allCharacters[t % allCharacters.length()]);

        }
        cout<<newWord<<endl;
        outfile << newWord << endl;

    }
    outfile.close();

}

//=============================================================================================

 void SortWords(int strings, int stringLength)
{
    
    cout << "----------------------------------------"<< endl;
    cout << "The sorted words are as follows: " << endl;
    fstream fs;
    fs.open("outfile.txt");
    
    
    if(fs.is_open())
    {
        for( short i = 0; i< strings; i++)
        {
            fs >> stringList[i];
        }
        sort(stringList, stringList + strings);
    }
    fs << "===============" << "Here are the sorted words" <<"=========" << endl;
    for (short i = 0; i< strings; i++)
    {
        cout << stringList[i] << endl;
        fs << stringList[i] << endl;
       
    }
    
}
//===================================================================================================
/*void ProblemThree()
{
    ProblemTwo(NumberOfStrings, StringList)
    cout << "------------------------------------" <<endl;
    for (short i = 0; i < howLong; i++)
    {
        sleep(300)
        cout << stringList[i]<< endl;
    }
        
} */

int main()
{
    int stringLength; int strings;
    
    cout << "How many number of strings do you want";
    cin >> strings;
    cout << "How long should the string be";
    cin >> stringLength;
    cout << "-----------------------------------" << endl;
    
    WordGenerator(strings, stringLength);
    SortWords(strings, stringLength);
    cout << "====================================" << endl;
    cout << "Done" << endl;
    //ProblemThree();
    
}
