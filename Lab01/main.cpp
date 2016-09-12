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
void WordGenerator(int NumberOfStrings, int StringLength);
void SortWords( int NumberOfStrings, int StringLength);

//===================================================================================================

void WordGenerator (int NumberOfStrings, int StringLength)
{
    ofstream outfile("outfile.txt");
    srand(time(NULL));
    
    for( short i = 0; i < NumberOfStrings; i++)
    {
        string newWord = " ";
        for(short i = 0; i<StringLength; i++)
        {
            int t = rand();
            NewWord = NewWord + (allCharacters[t % allCharacters.length()]);

        }
        cout<<NewWord<<endl;
        outfile << NewWord << endl;

    }
    outfile.close();

}

//=============================================================================================

 void SortWords(int NumberOfStrings, int StringLength)
{
    
    cout << "----------------------------------------"<< endl;
    cout << "The sorted words are as follows: " << endl;
    fstream fs;
    fs.open("outfile.txt");
    
    
    if(fs.is_open())
    {
        for( short i = 0; i<NumberOfStrings; i++)
        {
            fs >> StringList[i];
        }
        sort(StringList, StringList + NumberOfStrings);
    }
    fs << "===============" << "Here are the sorted words" <<"=========" << endl;
    for (short i = 0; i<NumberOfStrings; i++)
    {
        cout << StringList[i] << endl;
        fs << StringList[i] << endl;
       
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
    int StringLength; int NumberOfStrings;
    
    cout << "How many number of strings do you want";
    cin >> NumberOfStrings;
    cout << "How long should the string be";
    cin >> StringLength;
    cout << "-----------------------------------" << endl;
    
    WordGenerator(NumberOfStrings, StringLength);
    SortWords(NumberOfStrings, StringLength);
    cout << "====================================" << endl;
    cout << "Done" << endl;
    //ProblemThree();
    
}
