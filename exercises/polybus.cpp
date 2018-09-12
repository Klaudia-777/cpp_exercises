#include "polybus.h"
#include <iostream>
#include <vector>

using namespace std;

char display(char tab[5][5]){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (j==4) cout << tab[i][j] << endl;
            else cout << tab[i][j] << " ";
        }
    }
}

void insert(char tab[5][5]){
    char letter=97;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {

            if(tab[i][j-1] < 105 ) tab[i][j]=letter+i*5+j;
            else tab[i][j]=letter+i*5+j+1;

        }

    }
    display(tab);
}

vector<int> codexx(vector<char> input,char tab[5][5]){
    vector<int> output;
    insert(tab);

    for (int i = 0; i < input.size(); ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                if (tab[j][k] == input[i]) {
                    output.emplace_back((j + 1) * 10 + (k + 1));
                }
            }
        }

    }
    for (int l = 0; l < output.size(); ++l) {
        cout << output[l] << " ";
    }
    return output;

};
vector<char> decodexx(vector<int> output,char tab[5][5]){
    vector<char> input;
    insert(tab);

    for (int  i= 0; i < output.size(); ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                if (output[i]==10*(j+1)+k+1) {
                    input.emplace_back(tab[j][k]);
                }
            }
        }

    }
    for (int  l = 0; l < input.size(); ++l){
        cout << input[l] << " ";
    }
    return input;

};

void Polybus(vector<int> output,vector<char> input, bool choice){
    char tab[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    if(choice==true) codexx(input,tab);
    else decodexx(output,tab);
}
