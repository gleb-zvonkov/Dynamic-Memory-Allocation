//  Created by Gleb Zvonkov on 2020-11-10.
//

#ifndef definitions_h
#define definitions_h

    typedef struct Word { // Word structure typedefined as word contains information about each word in the sentences inputted
        char *p; // 1.) a pointer to a character
        int charnum; // 2.) an integer to store the number of characters in the word
        int position; // 3.) an integer to store the position of the word in the sentence it is contained in.
    }word;

    typedef struct Sentence { //Sentence structure typedefined as sentence contains infromation about each sentence inputted
        word *p; //1.) a pointer to the word construct listed above
        int linenum; // 2.) an integer to store the which line this is in the total collection
        int wordsnum; // 3.) an integer to store the exact number of words in this line
    }sentence;

    int countwords(char s[]); //function that counts the number of words in a sentence

    void func1 (sentence **sp, int *y); // func1 takes in user input and dynamically allocate memory for it
    void func2(sentence *sp, int i);  //func2 prints out user input from dynammically allocated memory
    void func3(sentence *sp, int i);  //func3 allows user to search for word in dynamically allocated memory
    void func4(sentence *sp, int i, sentence **double_sp); //func4 frees all dynamically allocated memory


#endif /* definitions_h */
