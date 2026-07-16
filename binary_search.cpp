#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    while(start <= end){
        // int mid = (start + end)/2;
        int mid = start + ((end - start)/2);
        if(arr[mid]  == key)
            return mid;
        
        else if(arr[mid] > key)
            end = mid-1;
        
        else
            start = mid + 1;
        
    }
    return -1;

}
int main(){
    int arr[] = {3,5,10,13,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<< "Enter the Element you want to search: ";
    cin >> key;
    cout<< search(arr, n, key);
}