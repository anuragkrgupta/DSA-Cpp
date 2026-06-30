#include<iostream>
using namespace std;
int main () {
    int isPrime = 1;
    int n;
    cin >> n;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;

        }
    }
    if(isPrime == 0){
        cout << n <<" is not a prime number.";
    }
    else{
        cout<< n << " is a prime number";
    }
}