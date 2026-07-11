//counting the number of '1' in a set bits
//eg:- 2 = 010; 3 = 011;
// ans = 3;
//using brian kernighan's algorithm (n = n & (n-1))

#include<iostream>
using namespace std;
int setBit1(int n){
    int count = 0;
    while(n != 0){
    n = n & (n - 1);
    count += 1;
    }
    return count;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout<< setBit1(a) + setBit1(b)<<endl;
}