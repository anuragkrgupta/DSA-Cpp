// you are given a string "number" representing a positive integer and a character digit. Return the resulting atring after removing exactly one occurance of digit from number such that the value of the resulting sting in decimal form is maximized. the test cases are generated such that digit occurs at least once in the number.
// I/P : number = "1321";
// digit = "1";
// O/P: 321;

#include<iostream>
#include<string>
std :: string onesOccurance(std :: string number, char digit){
    for(int i = 0; i<number.length(); i++){
        if(number[i] == digit){
            if(i+1 < number.length() && number[i]< number[i+1]){
                number.erase(i, 1);
                return number;
            }
        }
        
    }
    int i = number.rfind(digit);
    number.erase(i, 1);
    return number;
}

int main(){
    std :: string number = "1132";    
    char digit = '1';
   std :: cout << onesOccurance(number, digit);
  
    return 0;
}