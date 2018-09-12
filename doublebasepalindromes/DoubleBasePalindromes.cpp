
#include <iostream>
#include "DoubleBasePalindromes.h"

bool Palindrome(string number){
    for (int i = 0; i < number.length()/2; ++i) {
        if (number[i]!=number[number.length()-i-1]){
            return false;
        }
    }
    return true;
}



uint64_t DoubleBasePalindromes(int max_vaule_exculsive){
    string decimalString;
    string binaryString;
    uint64_t result=0;
    for (int i=0;i<max_vaule_exculsive;i++){
        decimalString=to_string(i);
        binaryString=DecimalToBinary(i);
        if(Palindrome(decimalString) and Palindrome(binaryString)){
            result+=i;
        }
    }
    return result;
}

string DecimalToBinary(int decimal) {
    string result;
    while(decimal!=0){
        if(decimal%2==1){
            result=result+"1";
        }
        else{
            result=result+"0";
        }
        decimal/=2;
    }
    return result;
}
