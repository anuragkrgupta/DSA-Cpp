// //2D array
// #include<iostream>

// int sum(int arr[3][3]){
//     int largest = 0;
//     for(int i = 0; i < 3; i++){ //i = col
//         int sum = 0;
//         for(int j = 0; j < 3; j++){ //j = row
//            sum += arr[i][j];
//         }
//         // std :: cout <<"sum : "<< sum << " " << std :: endl;
        
//         if(sum > largest){
//             largest = sum;
//         }
//     }
//     // std :: cout << std :: endl;
//     return largest;

// }

// int main(){
//     int arr[3][3]; //2D array
//     for(int i = 0; i < 3; i++){ //i = col
//         for(int j = 0; j < 3; j++){ //j = row
//            std :: cin >> arr[j][i];
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//            std :: cout << arr[i][j] << " "; //i = row & j = col;
//         }
//         std :: cout << std :: endl;
//     }
//     // int target;
//     // std :: cout << "enter the element to search: ";
//     // std :: cin >> target;
//     // if(isPresent(arr, target, 3 ,4)){
//     //     std :: cout << "element found";
//     // }
//     // else{
//     //     std :: cout << "element not found";
//     // }

//     std :: cout << "largest Row Sum = "<< sum(arr);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

//sine wave logic
// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].
#include<iostream>
int main(){
    int arr[3][3];
    for (int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            std::cin>>arr[i][j];
        }
    }

   // Sine wave
    for (int j = 0; j < 3; j++) {

        if (j % 2 == 0) {
            // Even column → top to bottom
            for (int i = 0; i < 3; i++) {
                std :: cout << arr[i][j] << " ";
            }
        }
        else {
            // Odd column → bottom to top
            for (int i = 2; i >= 0; i--) {
                std :: cout << arr[i][j] << " ";
            }
        }
    }
    return 0;    
}