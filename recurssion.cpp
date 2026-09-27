//recursivly calculation 2 power n;
#include<bits/stdc++.h>
using namespace std;
int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation
    // int smallP = power(n-1);
    // int bigP = 2 * smallP;

    return 2 * power(n-1);
}
int main(){
    int n = 0;
    cin >> n;

    int ans = power(n);
    cout<<ans;
}