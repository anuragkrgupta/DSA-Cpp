// Sort an array containing only 0, 1, and 2.
// [2, 0, 2, 1, 1, 0]
#include<iostream>
int sorrt(int arr[], int size){
    for(int i = 1; i<size; i++){
        for(int j = 0; j<size-1; j++){
            if(arr[j]>= arr[j+1]){
                std::swap(arr[j+1], arr[j]);
            }
        }
        
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