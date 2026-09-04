// fast exponentiation
// X,n,m = we have to do (x^n)%m

#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cin >> n>> m>> x;

    int result = 1;
    while(n>0){
    if(n&1){
        result = (1LL*(result%m) * (x%m))%m;
    }
    x= (1LL*(x%m) * (x%m))%m;
    n = n>>1;
    }
    cout << result;
    return 0;
}