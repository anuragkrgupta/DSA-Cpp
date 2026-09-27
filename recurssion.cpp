//recursivly calculation;
#include<bits/stdc++.h>
using namespace std;
//calculatin 2 ka power n-----------------
// int power(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }
//     //recursive relation
//     // int smallP = power(n-1);
//     // int bigP = 2 * smallP;

//     return 2 * power(n-1);
// }
// int main(){
//     int n = 0;
//     cin >> n;

//     int ans = power(n);
//     cout<<ans;
// }

//printing countings-------------------------

// void count(int n){
//     //base case
//     if(n == 0){
//         return ;

//     }
//     cout<< n << " ";
//     count(n-1);
// }

// int main(){

//     int n = 0;
//     cin >> n;
//     cout << endl;
//     count(n);
//     return 0;
// }

// factorial--------------


int fact(int n){
    // basecase
    if(n == 0){
        return 1;
    }
    // int ans = fact(n-1);
    return n*fact(n-1);
}

int main(){
    int n = 0;
    cin >> n;
    cout << fact(n);
    return 0;
}