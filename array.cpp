#include<iostream>
#include<array>
using namespace std;
// int arr(){
//     array<int, 100> arr;
//     arr.fill(1); //.fill method 
//     cout << arr[55];
// }

//array in fucnction;
int arrcall(int arr[] , int size){
    for (int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }
}
int main(){
    int n[10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
    arrcall(n , 10);
}

