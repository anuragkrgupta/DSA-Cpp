// Sort an array using Bubble Sort.
// [5, 1, 4, 2, 8]
#include<iostream>
// void bubble(int arr[], int size){
//     for(int i = 1; i<size; i++){
//        
//         for(int j = 0; j<size-1; j++){
//             if(arr[j] > arr[j+1]){
//                 std::swap(arr[j], arr[j+1]);
//             }
//         }
//         
//     }
// }

// Modify Bubble Sort so that it stops early if the array is already sorted.
// [1, 2, 3, 4, 5]
// void bubble(int arr[], int size){
//     for(int i = 1; i<size; i++){
//         for(int j = 0; j<size-1; j++){
//             if(arr[j] > arr[j+1]){
//                 std::swap(arr[j], arr[j+1])
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }

// Sort the array in descending order using Bubble Sort.
// [3, 7, 2, 9, 1]
void bubble(int arr[], int size){
    for(int i = 1; i<size; i++){
        for(int j = 0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);

            }
        }
    }
}


int main(){
    int arr[] = {3, 7, 2, 9, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, size);
    for(int i = 0; i<size; i++){
        std::cout << arr[i] << " ";
    }
}