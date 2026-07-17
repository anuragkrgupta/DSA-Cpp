//find the total number of occurence of an element in an array.
#include<iostream>
using namespace std;
int first_occurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int store = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            end = mid -1 ;
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

int last_occurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int store = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            start = mid + 1 ;
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
int ans(int arr[], int size, int key){
    int occurence = (last_occurence(arr, size, key) - first_occurence(arr, size, key)) + 1;
    return occurence;
}

int main(){
    int key;
    cout<<"enter the key: ";
    cin >> key;
    int arr[] = {1,2,3,3,3,3,3,3,3,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    first_occurence(arr, size, key);
    last_occurence(arr, size, key);
    cout<< ans(arr, size, key);
}