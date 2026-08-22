// Given an integer array nums, move all 0's to the end of it while maintaining the relative order  fo the non zero element
// note : that you must do this in-place without making a copy of the array 
// leetcode: 283

#include<iostream>
#include<vector>

void move(std :: vector<int>& arr){
    int j = 0;
    for (int i=0; i<arr.size(); i++){
        if(arr[i] != 0){
            std :: swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    std :: vector<int> arr ={0,1,0,3,12};
    move(arr);
    for ( int i=0; i<arr.size(); i++){
        std :: cout << arr[i] << " ";
    }
}