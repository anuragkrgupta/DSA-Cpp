#include<bits/stdc++.h>
using namespace std;

//swapping without using 3rd variable -------------------------

// int changes(int *p, int *q){
//     *p = *p + *q;
//     *q = *p - *q;
//     *p = *p - *q;
//     cout << "a= " << *p << " "<< "b= " << *q << endl;
//     return 0;
// }

// int main(){
//     int a = 0;
//     int b = 1;
//     changes(&a, &b);
//     return 0;
// }

//find maximum and minimum using pointer -----------------------
// void findMinMax(int *arr, int n, int *min, int *max){
//     *min = arr[0];
//     *max = arr[0];
//     for(int i = 0; i<n; i++){
//         if(arr[i] > *max){
//             *max = arr[i];
//         }
//         if(arr[i] < *min){
//             *min = arr[i];
//         }
//     }
//     cout << "min = " << *min << " max = " << *max << endl;
// }
// int main(){
//     int arr[] = {7, 2, 9, 4, 1, 8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max = 0;
//     int min = 0;
//     findMinMax(arr, n, &min, &max);
//     return 0;
// }

//reverse an array using pointer----------------------

// void reverseArray(vector<int>& v, int n) {

//     int *start = &v[0];
//     int *end = &v[n - 1];

//     while(start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }

//     for(int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }
// }

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5};

//     int n = v.size();

//     reverseArray(v, n);

//     return 0;
// }

// Second largest with actually sorting using pointer---------------------------

int secondLargest(int *arr, int n) {
    int largest = arr[0];
    int second = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    cout << second;
    return 0;
}

int main(){
    int arr[] = {10, 5, 30, 8, 20, 15};
    int n = sizeof(arr)/ sizeof(arr[0]);
    secondLargest(arr, n);
}

