//recursivly calculation;
// base case = rukna kab h!!
// recursive relation = calling the fucntion back to perform new iteration
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
// int fact(int n){
//     // basecase
//     if(n == 0){
//         return 1;
//     }
//     // int ans = fact(n-1);
//     return n*fact(n-1);
// }

// int main(){
//     int n = 0;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }



// fibonacci series
// 0,1,1,2,3,5,8,13,21.....

int fibo(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

void printFibo(int i, int n) {
    // We have printed n terms
    if (i == n) {
        return;
    }
    cout << fibo(i) << " ";
    printFibo(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    printFibo(0, n);
    return 0;
}