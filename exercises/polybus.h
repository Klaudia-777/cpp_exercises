#ifndef CPP_EXERCISES_POLYBUS_H
#define CPP_EXERCISES_POLYBUS_H

#include <vector>

using namespace std;

char display(char tab[5][5]);
void insert(char tab[5][5]);
vector<int> codexx(vector<char> input,char tab[5][5]);
vector<char> decodexx(vector<int> output,char tab[5][5]);
void Polybus(vector<int> output,vector<char> input, bool choice);

#endif
