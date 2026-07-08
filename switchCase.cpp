#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    switch(num){
        case 1: cout<<"one";
        break;

        case 2: cout<<"two";
        break;

        default: cout<<"only 1 & 2 accepted!";
        break;
    }
    return 0;
}