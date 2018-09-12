#include "cezar.h"
#include <iostream>
#include <vector>

using namespace std;


void cezarCode(char &letter,unsigned int move){
    if(letter>=97 && letter+move<=122) {
        letter=letter+move;
    }
    else if (letter+move > 122) {
        letter=97+move-(122-letter)-1;

    }

}


void cezar(vector<char> &word,unsigned int move){
    for (int i = 0; i < word.size(); ++i) {
        cezarCode(word[i],move);
    }

    for(auto n :word ){
        cout << n;
    }
}