//
//  main.cpp
//  Lab02
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
void WordGenerator(int Number_Of_Strings, int String_Length);
void SortWords( int Number_Of_Strings, int StringLength);

//===================================================================================================

void WordGenerator (int Number_Of_Strings, int String_Length)
{
    ofstream outfile("outfile.txt");
    srand(time(NULL));
    
    for( short i = 0; i < Number_Of_Strings; i++)
    {
        string New_Word = " ";
        for(short i = 0; i<String_Length; i++)
        {
            int t = rand();
            New_Word = New_Word + (allCharacters[t % allCharacters.length()]);

        }
        cout<<New_Word<<endl;
        outfile << New_Word << endl;

    }
    outfile.close();

}

//=============================================================================================

 void Sort_Words(int Number_Of_Strings, int String_Length)
{
    
    cout << "----------------------------------------"<< endl;
    cout << "The sorted words are as follows: " << endl;
    fstream fs;
    fs.open("outfile.txt");
    
    
    if(fs.is_open())
    {
        for( short i = 0; i< Number_Of_Strings; i++)
        {
            fs >> String_List[i];
        }
        sort(String_List, String_List + Number_Of_Strings);
    }
    fs << "===============" << "Here are the sorted words" <<"=========" << endl;
    for (short i = 0; i< Number_Of_Strings; i++)
    {
        cout << String_List[i] << endl;
        fs << String_List[i] << endl;
       
    }
    
}
//===================================================================================================
/*void Pause()
{
    ProblemTwo(NumberOfStrings, StringList)
    cout << "------------------------------------" <<endl;
    for (short i = 0; i < howLong; i++)
    {
        sleep(300)
        cout << stringList[i]<< endl;
    }
        
} */
//===================================================================================================

int main()
{
    int String_Length; int Number_Of_Strings;
    
    cout << "How many number of strings do you want";
    cin >> Number_Of_Strings;
    cout << "How long should the string be";
    cin >> String_Length;
    cout << "-----------------------------------" << endl;
    
    WordGenerator(Number_Of_Strings, String_Length);
    SortWords(Number_Of_Strings, String_Length);
    cout << "====================================" << endl;
    cout << "Done" << endl;
    //Pause();
    
}
//======================================================================================================
