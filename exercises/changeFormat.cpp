
#include <iostream>
#include "changeFormat.h"

using namespace std;

vector<char> changeFormat(vector<char> number){
    vector<int> to_delete;
    for (int i = 0; i < number.size(); ++i) {
        if(number[i] == 45){
            to_delete.emplace_back(i);
        }


    }
    for (int j = 0; j < to_delete.size(); ++j) {
        number.erase(number.begin()+to_delete[j]-j*1);
    }



    if(number.size()==9){
        for (int i = 1; i < 3; ++i) {
            number.insert(number.begin()+i*3+1*(i-1),'-');
        }
    }

    if(number.size()==7){

        number.insert(number.begin()+3,'-');
        number.insert(number.begin()+6,'-');

    }


    for (int k = 0; k < number.size(); ++k) {
        cout<<number[k];
    }


    return number;
}