//find the peak of the mountain of an array, that means we have to find the heighest element of an array.

#include<iostream>
using namespace std;
int  mountain(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int store = 0;
    while (start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        
        else{
            end = mid;
        }

    }
    return arr[start];
}
int main(){
    int arr[] = {1,2,4,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << mountain(arr, size);

}