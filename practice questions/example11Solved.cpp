//Given an array nums sorted in non-decreasing order. Every number in the array except one appears twice. Find the single number in the array.
// Example 1
// Input :nums = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]
// Output:4
// Explanation: Only the number 4 appears once in the array.

// Example 2
// Input : nums = [1, 1, 3, 5, 5]
// Output:3
// Explanation: Only the number 3 appears once in the array.

#include<iostream>
int Snum(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
      int mid = start + (end - start)/2;
      if (mid % 2 == 1){ //checking mid is even or odd
        mid --; //making mid even
      }
      if(arr[mid] == arr[mid + 1]){
        start = mid + 2;
      }
      
      else {
        end = mid;
      }

    }
    return arr[start];
}
int main(){
    int arr[] = {1, 1, 3, 5, 5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    std::cout<<Snum(arr, size);

}