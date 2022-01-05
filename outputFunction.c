//  Created by Gleb Zvonkov on 2020-11-10.
//

#include"headers.h"

//func2 prints out user input from dynammically allocated memory
void func2(sentence *sp, int i) { //parameters are i (the number of sentences) and sp (a pointer to Sentence structure)

    word *wp; //word pointer
    
    printf("This is all the words printed out one line at a time:\n");
    for (int h = 0; h < i; h++){ //run from 0 to i
        wp=sp[h].p;  //set word pointer to word pointer from Sentence structure
        for (int j=0; j< sp[h].wordsnum; j++ ){ //run from 0 to number of words
            printf("%s\n", wp[j].p );   // print word out, each word on a single line
        }
    }
    
    printf("This is all the words printed out on the same line as entered:\n");
    for (int h = 0; h < i; h++){  //run from 0 to i
        wp=sp[h].p;  //set word pointer to word pointer from Sentence structure
        for (int j=0; j< sp[h].wordsnum; j++ ){ //run from 0 to number of words
            printf("%s ", wp[j].p );  // print out each word until sentence is printed
        }
        printf("\n"); //start next line once sentence is printed
    }
    
}

/* Detailed Explanation of Function
- Print each and every word on a single line in the order entered by the user.
- Print out each sentence in its entirety in the order it was entered by the user.
 */
