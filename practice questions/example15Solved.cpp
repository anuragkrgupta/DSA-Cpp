// Find the kth smallest element using the idea of Selection Sort.
// [7, 10, 4, 3, 20, 15]
// k = 3
#include<iostream>
void select(int arr[], int size, int k){
    for(int i = 0; i < size - 1; i++){
        int minimum = i;
        for(int j =i+1; j<size; j++){
            if(arr[minimum]>arr[j]){
                minimum = j;
            }
        }
        std::swap(arr[minimum], arr[i]);
    }
}



int main(){
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int find;
    std::cout<<"enter the element you want to search: ";
    std::cin>>find;
    select(arr, size, find);
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout<<"\nThe smallest kth element is: "<<arr[find-1];

}