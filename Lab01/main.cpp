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
string stringList[MAX];
void one(int numberOfStrings, int stringLength);
void two( int numberOfStrings, int stringLength);
//const int howLong = 3;
//===================================================================================================

void wordGenerator (int numberOfStrings, int stringLength)
{
    ofstream outfile("outfile.txt");
    srand(time(NULL));
    
   /* int stringLength; int numberOfStrings;
    
    cout << "How many number of strings do you want";
    cin >> numberOfStrings;
    cout << "How long should the string be";
    cin >> stringLength;*/
    
    for( short i = 0; i < numberOfStrings; i++)
    {
        string newWord = " ";
        for(short i = 0; i<stringLength; i++)
        {
            int t = rand();
            newWord = newWord + (allCharacters[t % allCharacters.length()]);

        }
        cout<<newWord<<endl;
       //stringList[i] = newString;
        outfile << newWord << endl;
       /* //outfile << stringList[i] << endl;
        fstream fs;
        fs.open("outfile.txt");
        
       // sort(stringList[i].begin(), stringList[i].end());
       // sort(stringList, stringList + numberOfStrings);
       // cout<< stringList[i] << endl;*/
    }
    outfile.close();
    //return numberOfStrings;
}

//=============================================================================================

 void problemTwo(int numberOfStrings, int stringLength)
{
    
    cout << "----------------------------------------"<< endl;
    cout << "The sorted words are as follows: " << endl;
    fstream fs;
    fs.open("outfile.txt");
    
    
    if(fs.is_open())
    {
        for( short i = 0; i<numberOfStrings; i++)
        {
            fs >> stringList[i];
        }
        sort(stringList, stringList + numberOfStrings);
    }
    fs << "===============" << "Here are the sorted words" <<"=========" << endl;
    for (short i = 0; i<numberOfStrings; i++)
    {
        cout << stringList[i] << endl;
        fs << stringList[i] << endl;
        /*  string stringTempList[MAX];
        stringTempList[i]= stringList [i];
        while (fs << newString)
        {
            if (newString == stringTempList[i])
                {
                    newString = stringTempList[i];
                }
                
        }*/
        
    }
    
}
//===================================================================================================
/*void problemThree()
{
    problemTwo(numberOfStrings, stringList)
    cout << "------------------------------------" <<endl;
    for (short i = 0; i < howLong; i++)
    {
        sleep(300)
        cout << stringList[i]<< endl;
    }
        
} */

int main()
{
    int stringLength; int numberOfStrings;
    
    cout << "How many number of strings do you want";
    cin >> numberOfStrings;
    cout << "How long should the string be";
    cin >> stringLength;
    cout << "-----------------------------------" << endl;
    
    wordGenerator(numberOfStrings, stringLength);
    problemTwo(numberOfStrings, stringLength);
    cout << "====================================" << endl;
    cout << "Done" << endl;
    //problemThree();
    
}
