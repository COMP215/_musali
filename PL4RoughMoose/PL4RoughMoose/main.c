//
//  main.c
//  PL4RoughMoose
//
//  Created by Khadija Ali on 10/17/16.
//  Copyright (c) 2016 Musa Ali. All rights reserved.
/*name of function; input and output; names of group members*/
/*headers and things*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
    int currentindex = 0; /*remember that currentindex is the name for the index that is EMPTY until filled by the most recent character.*/
    char array[10]; /*allocate memory. room for about 10 characters?*/
    /*create token list with all tokens*/
    int TOKENMAX = 27;/*number of tokens in the tokenlist*/
    /*tokenlist will have to be defined somewhere*/
    /*Token list without extra tokens */
   /* char digitarray[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char floatnumarray[15] = {digitarray, '.', digitarray};*/
    
    char tokenlist[27][5];
    strcpy(tokenlist[0], "while");
    strcpy(tokenlist[1], "float");
    strcpy(tokenlist[2], "int");
    strcpy(tokenlist[3], "if");
    strcpy(tokenlist[4], "else");
    strcpy(tokenlist[5], "void");
    strcpy(tokenlist[6], "main");
    strcpy(tokenlist[7], "!=");
    strcpy(tokenlist[8], "==");
    strcpy(tokenlist[9], "<=");
    strcpy(tokenlist[10], ">=");
    strcpy(tokenlist[11], "&&");
    strcpy(tokenlist[12], "||");
    strcpy(tokenlist[13], "{");
    strcpy(tokenlist[14], "}");
    strcpy(tokenlist[15], "+");
    strcpy(tokenlist[16], "-");
    strcpy(tokenlist[17], "=");
    strcpy(tokenlist[18], "*");
    strcpy(tokenlist[19], "%");
    strcpy(tokenlist[20], "/");
    strcpy(tokenlist[21], ">");
    strcpy(tokenlist[22], "<");
    strcpy(tokenlist[23], "(");
    strcpy(tokenlist[24], ")");
    strcpy(tokenlist[25], ";");
    strcpy(tokenlist[26], ",");
   
    int tokentest = 0;
    int tokenflag = 0;
    char chara;
    
    FILE *fp;
    fp = fopen(argv[1], "r");
    
    if (fp) { /*not null; user did, in fact, enter a file to work with*/
        while (fscanf(fp, "%c", &chara) != EOF) {
            if (chara == ' ') {
                for (int i = 0; i < currentindex - 1; i++) {
                    printf("%c", array[i]);
                }
                currentindex = 0;
                tokenflag = 0;
            } /*if chara is a space, the array is printed and cleared*/
            else {
                array[currentindex] = chara;
            } /*end of else statement*/
            
            for (int j=0; j < 27; j++)
            { /*"outer" loop to test the array against every token in tokenlist*/
                int i=0;
                while (tokenlist[j][i] != '\0')
                { /*"inner" loop to test each individual character in the array to the characters in the current token*/
                    if (array[i] == tokenlist[j][i]) {
                        tokentest = 1;
                        printf("%d", tokentest);
                    }
                    else {
                        tokentest = 0; /*this assumes that we aren't going to get a mismatched character followed immediately by a matching one. How likely is that to happen, do you think?*/
                        break;
                    }
                    i++;
                } /*at this point, the inner loop is finished testing every character of the current token*/
                if (tokentest == 1)
                {
                    tokenflag = 1; /*tells us a token is currently contained in our array*/
                }
            } /*at this point, the outer loop has compared every single token to the characters in the array and (presumably) has failed to find a match*/
            
            if (tokenflag == 1)
            { /*if we know that our array has a token in it...*/
                if (tokentest == 0) { /*...but for some reason the addition of this most recent chara makes it fail the token test...*/
                    for (int i=0; i < currentindex - 1; i++) {
                        printf("%c", array[i]);
                    }
                    tokenflag = 0;
                    currentindex = 0;
                    array[0] = chara;
                }
            } /*if tokenflag is true but it didn't fail the token test, we'll just keep it in the array until it does, at which point we'll print out all but the most recent chara.*/
            
            if (chara != ' ') {
                currentindex++;
            }
        } /*end of character-by-character scan of the input file*/
        
        for (int i=0; i < currentindex; i++) { /*prints the last stuff in the array, if any.*/
            printf("%c", array[i]);
        }
        fclose(fp);
    }
    else {
        printf("ERROR - no file \n");
    } /*well...it was in our last project, so...*/
}