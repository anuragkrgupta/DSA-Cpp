// Find the minimum number of swaps required to sort:
// [10, 19, 6, 3, 5]
// #include<iostream>
// int bubble(int arr[], int size){
//     int swap = 0;
//     for(int i = 1; i<size; i++){
//         bool swapped = false;
//         for(int j = 0; j<size-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap++;
//                 std::swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
           
//         }
//         if(swapped == false){
//             break;
//         }
//     }
//     return swap;
// }

// int main(){
//     int arr[] = {10, 19, 6, 3, 5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int swap = bubble(arr, size);

//     for(int i = 0; i<size; i++){
//         std::cout<<arr[i]<< " ";
//     }
//     std::cout<<"\nminimum number of swaps: "<<swap;
// }