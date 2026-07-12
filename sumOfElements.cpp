#include<iostream>
using namespace std;
int arrays(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<< "Enter the size of an array: ";
    cin >> size;
    cout << "Enter the elements: ";
    int num[50];
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    cout << arrays(num, size);
}