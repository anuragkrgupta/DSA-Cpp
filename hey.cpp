#include<iostream>
using namespace std;
 int main(){
    char ch;
    cout << "enter a digit / character: ";
    cin >> ch;
    if (isupper(ch)){
        cout<< "uppercase!";
    }
    else if(islower(ch)){
        cout<< "lowercase!";
    }
    else{
        cout<< "numeric!";
    }
 }