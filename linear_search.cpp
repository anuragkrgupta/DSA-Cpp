#include<iostream>
using namespace std;
bool search (int arr[] , int size, int ele){
   
    for(int i=0; i<size; i++){
        
        if(ele == arr[i]){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[] = {1, 2, 4, -5, 8 ,10, 11, 16, 17};
    int n;
    cout<< "enter the element to seach: "<< endl;
    cin >> n;
    int found = search(arr, 10, n);
    if(found){
        cout << "the element is present!";
    }
    else{
        cout << "element is not present!";
    }

}