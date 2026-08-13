// Insertion Sort
// Sort an array using Insertion Sort.
// [12, 11, 13, 5, 6]
#include<iostream>
// int insert(int arr[], int size){
//    int i = 1;
//     while(i<size){
//         int temp = arr[i];
//         int j = i-1;
//         while(j>=0){
//             if(arr[j]>temp){
//                 arr[j+1] = arr[j];
//                 j--;
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//         i++;
//     }
// }

// Sort an array in descending order using Insertion Sort.
// [4, 2, 7, 1, 9]
// int insert(int arr[], int size){
//    int i = 1;
//     while(i<size){
//         int temp = arr[i];
//         int j = i-1;
//         while(j>=0){
//             if(arr[j]<temp){
//                 arr[j+1] = arr[j];
//                 j--;
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//         i++;
//     }
// }

// Insert a new element into an already sorted array while maintaining sorted order.
// Array: [1, 3, 5, 7, 9]
// Insert: 6
int insert(int arr[], int size){
   int i = 1;
    while(i<size){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        i++;
    }
}
int main(){
    int arr[] = {1, 3, 5, 7, 9, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insert(arr, size);
    for(int i=0; i<size; i++){
        std::cout << arr[i] << " ";
    }
}