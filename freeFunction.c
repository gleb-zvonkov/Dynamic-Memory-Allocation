//  Created by Gleb Zvonkov on 2020-11-11.
//

#include"headers.h"

//func4 frees all dynamically allocated memory
void func4(sentence *sp, int i, sentence **double_sp){ //parameters are sp (a pointer to Sentence structure) and i (the number of sentences) and double_sp (double pointer to sentence)
    
    //free words
    for (int h = 0; h < i; h++){  //loop to run from 0 to i 
        word *wp;  //word pointer
        wp=sp[h].p; //set word pointer to word pointer from sentence
        for (int j=0; j< sp[h].wordsnum; j++ ){ //loop to run from 0 to number of words in setence
           free( wp[j].p );  // from  wp[i].p = (char *)malloc(10* sizeof(char));
        }
    }
    
    // free word structures
    for (int h = 0; h < i; h++){
        free(sp[h].p); //form  sp[i-1].p = (word *)malloc(countwords(str)* sizeof(word));
    }
    
    //free sentence sctructure
    free(sp);  //from  sp =(sentence *) realloc (sp, (i)*(sizeof(sentence)));
    
    //free double pointer used to pass pointer to setence
    free(double_sp);  //from sp = (sentence*)malloc(sizeof(sentence));
    
}
