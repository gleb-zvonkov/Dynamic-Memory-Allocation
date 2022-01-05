//  Created by Gleb Zvonkov on 2020-11-11.
//

#include"headers.h"

//func3 allows user to search for word in dynamically allocated memory
void func3(sentence *sp, int i){ //parameters are i (the number of sentences) and sp (a pointer to Sentence structure)
    
    char str[1000]="x";  // input string
    while (str[0] != '\0') {  //keep asking user for string until he presseses enter without typing a string
        int notfound=1;   //set notfound to true
        printf("Enter a word to search for: ");
        gets(str);  //place user input into string
        word *wp;  //word pointer
         for (int w=0; w<i; w++){  //for loop to run from 0 to i
             wp = sp[w].p;   // set word pointer to word pointer from sentence
             for (int t=0; t< sp[w].wordsnum; t++ ){   //for loop to run from 0 to number of words in sentence
                 if (0 == (strcmp(wp[t].p , str)) ){  //if word is equal to string inputted
                     printf("%s found in line %d position %d \n" , wp[t].p, sp[w].linenum, wp[t].position); //print info
                     notfound=0; // set notfound to false
                 }
             } //end for loop
         } //end for loop
        if (notfound) //if notfound is true
            printf("%s was not found in this file \n", str); //print string
     }//end while loop
    
}

/* Detailed Explanation of Function
- Prompts the user for a word to search for in the text entered. 
- If it finds the word, print out which line and position the word was found in.
- Searchs the entire text and reports each time the word is found.
- Uses the values stored in the structures.
- Inform's the user if it does not find the word.
- Repeat this process until the user hits the enter key without text.
 */
