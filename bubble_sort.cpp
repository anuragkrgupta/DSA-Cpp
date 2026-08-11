//bubble sort
#include<iostream>
int sortt(int arr[], int n){
    for(int i = 1; i<n; i++){
        //calculating the rounds we will perform
        bool swapped = false;
        for(int j = 0; j<n-i; j++){
            if (arr[j] > arr[j + 1])
            {
                std :: swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
int main(){
    int arr[] = {1,7,6,10,9,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortt(arr , n);
    for (int i = 0; i<n; i++){
        std :: cout << arr[i]<< " ";
    } 
    return 0;
}

//time complexity = O(n*n);  bestCase(if array is already sortted) = O(n);
//space complexity = O(1);