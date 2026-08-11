//performing selection sort
#include<iostream>
int sortt(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        int minimum = i;
        for(int j = i+1; j<size; j++){
            if(arr[j]<arr[minimum]){
                minimum = j;
            }
        } 
        std :: swap(arr[minimum], arr[i]);
    }
}
int main(){
    int arr[] = {7,1,4,3,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    sortt(arr, size);
    for (int i = 0; i<size; i++){
        std :: cout << arr[i] << " ";
    }
    return 0;
}