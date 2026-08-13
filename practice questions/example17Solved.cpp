// Find the number of shifts performed by Insertion Sort.
// [5, 4, 3, 2, 1]

#include<iostream>
int insert(int arr[], int size){
    int shift = 0;
    for(int i = 1; i<size; i++){
        int temp = arr[i];
        int j;
        for(j = i-1; j>=0; j--){
            if(arr[j]> temp){
                arr[j+1] = arr[j];
                shift++;
            }
        }
        arr[j+1] = temp;
    }
    return shift;
}
int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int shift = insert(arr, size);

    for(int i = 0; i<size; i++){
        std::cout<<arr[i];
    }
    std::cout<<"\nshift count = " <<shift;
}