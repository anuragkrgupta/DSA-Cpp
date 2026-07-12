#include<iostream>
#include <climits>
using namespace std;

int getmin(int num[] , int n){
    int min = INT_MAX;
    for ( int i = 0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getmax(int num[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int size; 
    cout<< "enter the size of an array: ";
    cin >> size;
    int num[10];
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    cout << "maximum: "<<getmax(num, size) << endl;
    cout << "minimum: "<<getmin(num, size) <<endl;
}