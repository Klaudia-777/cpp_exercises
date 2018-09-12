#include "biggest_result.h"
#include <iostream>
#include <vector>


using namespace std;


vector<int> fill(vector<int> numbers){
    int number;
    bool stop;
    while(true){
        cout << "Enter a number:" << endl;
        cin >> number;
        numbers.emplace_back(number);
        cout << "More numbers? 0-yes, 1-no" << endl;
        cin >> stop;
        if(stop==1)  break;
    }
    cout << " " << endl;
    cout << "Your table:"<< endl;
    for (int  i = 0; i < numbers.size(); ++i){
        cout << numbers[i] << " ";
    }

    return numbers;

}

int max(vector<int> numbers){
    int max = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        if (max<numbers[i]) max = numbers[i];
    }
    return max;
}

int whichElement(vector<int> numbers){

    int a=max(numbers);
    for (int  i = 0; i < numbers.size(); ++i){
        if(numbers[i]==a) {
            return i;
        }
    }


}
vector<int> removeElement(vector<int> numbers){
    int which = whichElement(numbers);
    numbers.erase(numbers.begin()+which);

    return numbers;
}
int GreatestProduct(vector<int> numbers, int k){
    int result=1;
    for (int i = 0; i < k; i++) {
        if(max(numbers)>0) {
            result = result * max(numbers);
            numbers = removeElement(numbers);
        }
        else {
            cout << "Warning: too many multipliers. " << endl;
            break;
        }
    }
    cout << "The biggest result is: "<< endl;
    return result;
};
