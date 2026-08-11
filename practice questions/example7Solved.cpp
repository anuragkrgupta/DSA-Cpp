//book allocation problem
#include<iostream>
using namespace std;
bool isPossible(int arr[], int size, int stdnt, int mid){
    int studentCount = 1;
    int sum = 0;
    for(int i=0; i<size;i++){
        if(sum + arr[i] <= mid){
            sum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > stdnt || arr[i] > mid){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}
int func(int arr[], int size ,int stdnt){
    if(stdnt > size || stdnt == 0){
        return -1;
    }
    int start = 0;
    int end = 0;
    for(int i=0;i<=(size-1); i++){
        end += arr[i];
    }
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(arr, size, stdnt, mid)){
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
int arr[] = {10, 20, 30, 40};
int size = sizeof(arr)/sizeof(arr[0]);
int kid;
cout<< "enter thee total number of students: ";
cin >> kid;
cout << func(arr,size,kid);
}
