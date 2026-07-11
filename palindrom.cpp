#include<iostream>
using namespace std;
int isPalindrom() {
    int n;
    cin >> n;
    int input = n;
    int ans = 0;
    while (n != 0){
       int digit = n%10;
       ans = (ans * 10) + digit ;
       n = n/10;
    }
    if (ans != input){
        cout << input << " is not a palindrom number"<<endl;
    }
    else{
        cout << input << " is a palindrom number"<<endl;
    }
    // return ans;
}
int main(){

   isPalindrom();
}