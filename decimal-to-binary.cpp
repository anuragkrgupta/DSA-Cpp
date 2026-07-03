//lets do it by simply dividing the integer by 2

#include<iostream>
using namespace std;
int main() {
    int n, i;
   cin >> n;
    int ans [10]= {};
    for ( i=0; n!=0; i++){
        ans[i] = n%2;
        n = n/2;

    }
    for (int j=i-1; j>=0; j--){
        cout<< ans[j];
    }
    return 0;
}