#include<iostream>
using namespace std;
int swapping(int arr[] , int size){
    int first = 0;
    int second = 1;
    for(int i = 0; i<size; i++){
       swap(arr[first] , arr[second]);
        first = first + 2;
        second = second + 2;
    }
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    swapping(arr, n);
}