#include<iostream>
using namespace std;
int main() {
    int n;
    cin>> n;
   int  m = n;
    if (n == 0){
        cout << 1;
    }
    int mask = 0;
    while ( m != 0){
        mask = (mask << 1) | 1; //here all 0 will become 1 by performing 'OR'
        m = m >> 1; // here all input binary become 0 by performing right shift
    }
    int ans = (~n) & mask; // 1's complimentof  n and perform 'AND' with mask.
    cout << ans;
}