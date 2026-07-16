// //Find the unique element
// #include<iostream>
// using namespace std;
// int unique(int arr[] , int size){
//     int ans = 0;
//     for(int i=0; i<size; i++){
//         ans = ans ^ arr[i]; //Keep XORing every element into ans. Duplicate values eventually cancel each other, leaving only the unique value.
//     }
//     return ans;

// }
// //there is a condition of using xor, Every element appears exactly twice, except one element that appears once.

// int main(){
//     int arr[] = {2, 3, 1, 6, 3, 6, 2, 2, 2, 5, 6, 1, 0, 6};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//    cout <<  unique(arr, n) << endl;
//    return 0;

// }

//finding all the unique elements of an array, without using xor 
#include<iostream>
using namespace std;
int finding(int arr[], int size){

    
    for (int i = 0; i < size; i++) {

            int count = 0;

            for (int j = 0; j < size; j++) {

                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            if (count == 1) {
                cout << arr[i] << " ";
            }
        }
    }


int main(){
    int arr[] = {2, 3, 1, 6, 3, 6, 2, 115, 2, 5, 6, 1, 0, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    finding(arr, n);
    return 0;
}