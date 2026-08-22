// reversing an array using vector
#include<iostream>
#include<vector>
int main(){
   std :: vector<int> arr = {11,7,3,12,4};
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        std::swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    for(int i=0; i<arr.size(); i++){
       std :: cout<< arr[i] << " ";
    }
}