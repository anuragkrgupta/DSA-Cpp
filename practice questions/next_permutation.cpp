// next permutation
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3};
    int r = 1;
    int n = arr.size();
    int result = 1;
    for(int i = 0; i<r; i++){
        result *= n--;
    }
    cout << result;
    return 0;
}