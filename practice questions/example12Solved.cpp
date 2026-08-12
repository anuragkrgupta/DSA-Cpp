#include<iostream>
// 1. Sort an array in ascending order using Selection Sort.
// [64, 25, 12, 22, 11]
// void select(int arr[], int size){
// for(int i=0; i<size-1; i++){
//     int minimum = i;
//     for(int j = i+1; j<size; j++){
//         if(arr[j] < arr[minimum]){
//             minimum = j;
//         }
//     }
//     std::swap(arr[minimum], arr[i]);
// }
// }
// Sort an array in descending order using Selection Sort.
// [5, 2, 8, 1, 9, 3]
// void select(int arr[], int size){
// for(int i=0; i<size-1; i++){
//     int minimum = i;
//     for(int j = i+1; j<size; j++){
//         if(arr[j] > arr[minimum]){
//             minimum = j;
//         }
//     }
//     std::swap(arr[minimum], arr[i]);
// }
// }
// Find the minimum number of swaps required to sort an array using the Selection Sort idea.
// [4, 3, 2, 1]
int select(int arr[], int size){
    int count = 0;
    for(int i = 0; i<size-1; i++){
        int minimumIndex = i;
        for(int j = i + 1; j<size; j++){
            if(arr[j]<arr[minimumIndex]){
                minimumIndex = j;
            }
        }
        if (minimumIndex != i) {
            std::swap(arr[minimumIndex], arr[i]);
            count++;
        }
    }
    std::cout<<count;
}
int main(){
    int arr[] = {4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    select(arr, size);

    // for(int i=0; i<size; i++){
    //     std::cout<<arr[i]<<" ";
    // }
    return 0;
}