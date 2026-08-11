//performing selection sort;
#include<iostream>
 int main(){
    int arr[] = {2,6,3,9,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for ( int i=0; i<n-1; i++){
        int minimum = i;

        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minimum]){
                minimum = j;
            }
        }
        std::swap(arr[minimum], arr[i]);
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
 } 

 //time complexity (bestCase & worstCase) = O(n*n);
 //space complexity = O(1);