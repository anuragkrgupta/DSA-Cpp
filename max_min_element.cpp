#include<iostream>
#include <climits>
using namespace std;

int getmin(int num[] , int n){
    int mini = INT_MAX;
    for ( int i = 0; i<n; i++){
        // if(num[i] < min){
        //     min = num[i];
        // }
        mini = min(mini, num[i]);
        
    }
    return mini;
}

int getmax(int num[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        // if(num[i] > max){
        //     max = num[i];
        // }
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int main(){
    int size; 
    cout<< "enter the size of an array: ";
    cin >> size;
    int num[10];
    cout<< "enter the array elements: ";
    for(int i=0; i<size; i++){
        
        cin >> num[i];
    }
    cout << "maximum: "<<getmax(num, size) << endl;
    cout << "minimum: "<<getmin(num, size) <<endl;
}