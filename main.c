/* Gleb Zvonkov */
/* November 29, 2020 */

#include"headers.h"

int main( ){
    int i = 0;    // integer for the number of sentences inputted
    sentence **double_sp;  // double_sp points to sp wich points to Sentence structure
    sentence *sp;   // sp that will point to Sentence structure
    double_sp = (sentence**)malloc(sizeof(sp)); // allocated space for one sentence pointer
    
    func1(double_sp, &i); // func1 (inputFunction) takes in user input and dynamically allocate memory for it
    sp = *double_sp;     // set sp to point to sentences dynamically allocated in func1

    func2(sp, i);  //func2 (outputFunction) prints out user input from dynammically allocated memory
    func3(sp,i);  //func3 (searchFunction) allows user to search for word in dynamically allocated memory
    func4(sp,i, double_sp); //func4 (freeFunction) frees all dynamically allocated memory
    
    return 0;
}


