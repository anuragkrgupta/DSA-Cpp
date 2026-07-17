//find the first and the last position of an element in the sorted array.
#include<iostream>
using namespace std;
int first_element(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int store = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            end = mid-1;
            store = mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return store;
}

int last_element(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int store = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            start = mid + 1;
            store = mid;
        }
         else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return store;
}

int main(){
int key;
cout<< "Enter the key: ";
cin >> key;
int arr[] = {1,2,3,3,5};
int size = sizeof(arr)/sizeof(arr[0]);
cout << first_element(arr, size, key) << " ";
cout << last_element(arr, size, key);
}