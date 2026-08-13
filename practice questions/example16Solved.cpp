// Sort an array containing only 0, 1, and 2.
// [2, 0, 2, 1, 1, 0]
#include<iostream>
int sorrt(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        int minimum = i;
        for(int j = i + 1; j<size; j++){
            if(arr[minimum]>= arr[j]){
                minimum = j;
            }
        }
        std::swap(arr[minimum], arr[i]);
    }
}

int main(){
    int arr[] = {2, 0, 2, 1, 1, 0};
    int size = sizeof(arr)/ sizeof(arr[0]);
    sorrt(arr, size);

    for(int i = 0; i<size; i++){
        std::cout<< arr[i]<< " ";
    }
}