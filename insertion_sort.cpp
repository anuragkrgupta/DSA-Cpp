//performing insertion sort
#include<iostream>
void sortt(int arr[], int n){
    int i = 1;
    while(i<n){
        int check = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>arr[j+1]){
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1] = check;
        i++;
    }
}

int main(){
    int arr[] = {3, 7, 10, 15, 4, 6};
    int size = sizeof(arr)/ sizeof(arr[0]);
    sortt(arr, size);

    for(int i = 0; i<size; i++){
        std :: cout << arr[i] << " ";
    }
    return 0;
}