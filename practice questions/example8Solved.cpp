//Paintr's Partition Problem.
// givven an array/list of length 'N', where the array/list represent the boards and each element of the given array/list represents the length of each board. Some 'K' number of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
//You are supposed to return the area of the maximum time to get job done of painting all the 'N' boards under a contraints that any painter will only paint the continuos  section of boards.

#include<iostream>
using namespace std;
bool isPossible(int arr[], int size, int painters, int mid){
    int pCount = 1;
    int sum = 0;
    // for(int i = 0; i<size;i++){
    //     sum += arr[i];
    // }
    for(int i = 0; i < size; i++){
        if(sum + arr[i] <= mid){
            sum +=arr[i];
        }
        else{
            pCount ++;
            if(pCount > painters || arr[i] > mid){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}
int func(int arr[], int size, int painters){
    int start = 0;
    int end = 0;
    for(int i=0; i<size;i++){
        end +=arr[i];
    }
    int ans = -1;
    while ( start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(arr, size, painters, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int painters;
    cout << "enter the total numbers of painters: ";
    cin >> painters;
    cout << func(arr,size,painters);
}