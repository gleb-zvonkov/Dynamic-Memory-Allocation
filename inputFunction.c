//  Created by Gleb Zvonkov on 2020-11-10.
#include"headers.h"

// func1 takes in user input and dynamically allocate memory for it
void func1 (sentence **double_sp, int *y) { //parameters are double_sp (double pointer to sentence) and y (pointer to number of sentences)
    
    sentence *sp; // pointer to setence
    sp = (sentence*)malloc(sizeof(sentence)); // set aside area in the heap to accommodate one sentence
    int i=0;  // number of sentences inputted
    char str[1000]="x";  // character string for user inputted string
    
    while (str[0] != '\0') { //keep asking user for string until he presseses enter without typing a string
        printf("Enter a string: ");
        gets(str);  //place string inputted into str
        i=i+1;     // everytime loop runs increment i, so i is the number of sentences (strings) inputted
        sp =(sentence *) realloc (sp, (i)*(sizeof(sentence)));  // reallocate area in the heap to accommodata i sentences

        sp[i-1].linenum = i;  //set linenum (line number) of sentence
        sp[i-1].wordsnum = countwords(str);  //set wordsnum (number of words) of sentence, countwords(str) counts the number of words in a string
        
        sp[i-1].p = (word *)malloc(countwords(str)* sizeof(word));  //allocate area in the heap to accomodate countwords(str) words
        word *wp; //create a pointer to word
        wp = sp[i-1].p; // set word pointer to word pointer from sentence

        for (int j=0; j<countwords(str); j++ ){  //for loop to run from 0 to countwords(str)
            wp[j].position=j+1;   //set position of word to j
        }

        char * p; // pointer that will point to a word in the sentence
        p = strtok (str," ");  //function "breaks string str into a series of tokens using the delimiter delim" in this situation the delim is " "
        int w=0;  //increment variable for words
        while (p != NULL){   //run loop while p is not equal to null
            char strWord [strlen(p)];    //char string to contain word
            strcpy(strWord,p);         //copy word found in the string to strWord
            wp[w].p = (char *)malloc( (strlen(p)) * sizeof(char)); //allocate memory for characters of a word
            char *c;  //create a pointer to a character
            c = wp[w].p;  //set character pointer to character pointer from Word structure
            for (int j= 0; j < (strlen(p)+1) ;  j++){   //for loop to run from 0 to strlen(strWord)+1, increment throught character of a word
                c[j]= strWord[j]; //set character j from strWord to character j from Word structure
            }
            w= w+1; //increment w each time new word is found
            p = strtok (NULL, " "); //find next word in sentence
        } // end while loop 
        
    } // end while loop that keeps asking user for string
    
    *y = i-1;  // set y to i-1 by indirection, i-1 is the number of sentences
    *double_sp = sp; // set double_sp to sp by indirection, sp is the pointer to sentence
    printf("\n");
}

/* Detailed Explanation of Function
 - First the user is prompted for a line of text.
 - Each line is processed one by :
    Breaking up each word in each line of text, ignoring all white space.
    Store each word separately in an instance of the word structure.
    For each word, store the size in that word and the position in that line of this word.
 - Repeat the process until the user hits the enter key without text.
 */

