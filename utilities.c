//  Created by Gleb Zvonkov on 2020-11-10.
//
#include"headers.h"

//function that counts the number of words in a sentence
int countwords(char s[]){ //parameter is a string of characters
    int count = 0;   //count varaible
    int i = 0;
    while(s[i] != '\0'){   // for loop thar runs until character is equal to \0
        if (s[i] == ' ' && s[i+1] != ' ')  //if character is space and next character is not space
            count++;  //increment count
        i=i+1;
    }
    return count+1; //return count+1 to include first word
}
