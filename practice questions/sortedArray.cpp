// searching is array is sorted ot not
#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& arr, int i){
    if (i >= arr.size() - 1) {
        return true;
    }

    if (arr[i] > arr[i + 1]) {
        return false;
    }
    
    return isSorted(arr, i + 1);
}
int main(){
    vector<int> arr = {2, 3, 6, 4, 8, 5};

    if (isSorted(arr, 0)) {
        cout << "Sorted";
    } else {
        cout << "Not sorted";
    }

    return 0;
}