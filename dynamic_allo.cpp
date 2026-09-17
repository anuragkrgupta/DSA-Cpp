#include<bits/stdc++.h>
using namespace std;
// void dynamicAllo(){

// }

int getsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];

    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    // char ch = 'a';
    // cout << sizeof(ch) << endl;
    // char* c = &ch;
    // cout << sizeof(c) << endl;
    // char *a = new char;
    // cout << sizeof(a) << endl;
    //int* arr uses stack memory & new int[5] uses heap memory ('new' is the keyword to allocat memory into heap)
    int* arr = new int[n]; //["int* arr" is a pointer & "new int [5]" is dynamic allocation ]
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }   
    cout << getsum(arr, n);

    
    delete[] arr; // when a dynamic aalloaction o memmory is created on heap you should always realese the memory

    // new       → allocate memory
    // delete    → release one object
    // new[]     → allocate array
    // delete[]  → release array   
    
    return 0;
}