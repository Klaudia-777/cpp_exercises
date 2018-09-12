
#include "multiplication_table.h"
#include <iostream>
using namespace std;


void display(int tab[11][11]){
    for (int i = 0; i <11; ++i) {
        for (int j = 0; j < 11; ++j) {
            if(j<10) {
                if(tab[i][j]<10) cout << tab[i][j]<<"  ";
                else cout << tab[i][j]<<" ";
            }
            else cout << tab[i][j] << endl;
        }
    }
}

void multiplicaionTable( int tab[11][11]){
    cout << " " << endl;
    cout << "MULTIPLICATION TABLE:" << endl;
    cout << " " << endl;

    tab[0][0]=NULL;

    for (int k = 1; k < 11; ++k) {
        tab[0][k]=k;
        tab[k][0]=k;
    }

    for (int i = 1; i <11; ++i) {
        for (int j = 1; j < 11; ++j) {
            tab[i][j] = i*j;
        }
    }
    display(tab);
}

