
#include "wisielec.h"
#include <iostream>
#include <string>
using namespace std;


void display(char *tab, string word) {
    cout<<endl;
    for (int i = 0; i < word.size() ; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl<<endl;
}


int call_count=0;


void losingPoints() {
    string tab[5]={"left leg","right leg","left arm","right arm","head"};
    cout<<"You've lost your " << tab[call_count] << "." << endl;

    call_count ++;
}



bool isEmpty(char *tab, string word){

    for (int i = 0; i < word.size(); ++i) {
        if(tab[i]==NULL) return false;
    }
    return true;
}


void play(string word) {
    char tab[word.size()]={NULL};
    char letter;
    bool gra=0;

    while(true) {
        int iterator=0;
        cout << "Player 2: guess a letter: ";
        cin >> letter;
        cout << endl;
        for (int i = 0; i < word.size(); ++i) {
            if (letter == word[i]) {
                tab[i] = letter;
                gra = 1;
            }
        }

        if(gra==1) cout << "You've guessed right!" << endl;

        if (gra == 0) {
            cout << "There's no " << letter << " in the word." << endl;
            losingPoints();

        }
        gra = 0;

        display(tab, word);
        if (call_count == 5) {
            cout << "Stop trying. You're a LOSER." << endl;
            break;
        }

        if(isEmpty(tab, word)) {
            cout << "You win! :)" << endl;
            break;
        }


    }




}

