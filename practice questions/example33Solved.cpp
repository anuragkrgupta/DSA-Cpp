// subtract (i%7)*3 from each element and add nums[i]/11 if the nums[i] is divisible by 11;
#include<bits/stdc++.h>
using namespace std;
void sub(vector<int>& ar){
    for(int i = 0; i<ar.size(); i++){
        int sum;
        
        if(ar[i]%11 == 0){
            sum  = ar[i] + (ar[i]/11);
        }
        else{
            sum = ar[i] - (i%7)*3;
        }
        cout << sum << " ";
    }
}

int main(){
vector<vector<int>> ar = {
        {12, 3, 55, 67, 59, 1},
        {22, 3, 55, 67, 59, 1},
        {11},
        {11, 22, 33, 44},
        {10, 20, 30, 40},
        {0, 1, 2, 3},
        {-11, -22, -33},
        {1, 11, 2, 22, 3, 33},
        {121, 100, 110, 50},
        {100, 101, 102, 103, 104, 105, 106},
        {7, 14, 21, 28, 35, 42, 49},
        {1000, 999, 998, 997, 996, 995, 994, 993}
    };
    for(int i = 0; i < ar.size(); i++) {
        cout << "Test case " << i + 1 << ": ";
        sub(ar[i]);
    }
    return 0;
}