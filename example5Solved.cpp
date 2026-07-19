//search in rotated array.
#include<iostream>
using namespace std;
int pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int search(int arr[],int start, int end, int key){
    
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;

}

int compare(int arr[], int size, int key){
   int index = pivot(arr, size);

   if(key >= arr[index] && key <= arr[size - 1]){
    int end = size - 1;
    return search(arr, index, end, key);
   }
   else{
    int end = index - 1;
       return search (arr, 0, end, key);
   }

}

int main(){
    int arr[] = {3,4,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key, end;
    cout << "Enter the key to search: ";
    cin >> key;
    cout << compare(arr, size, key);
}