//finding the pivot in an array using binary search.
#include<iostream>
using namespace std;
int pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while ( start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return arr[start];
}
int main(){
    // int arr[] = {4, 5, 6, 7, 1, 2, 3};
    // int arr[] = {3,4,1,2};
    // int arr[] = {7,8,9,10,4,5,6};
    int arr[] = {5,6,7,1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << pivot(arr, size);
}