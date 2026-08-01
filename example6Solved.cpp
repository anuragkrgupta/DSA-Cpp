// find the sqrt using binary search.
#include<iostream>
using namespace std;
int check( int size){
    int start = 0;
    int end = size;
    int ans = -1;
    while(start <= end){
        long long int mid = start + (end - start)/2;
        long long int sqr = mid * mid;
        if(sqr == size){
            return mid;
        }
        else if(sqr < size) {
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}


int main(){
    int n;
    cout<< "Enter the number: ";
    cin >> n;
    cout << check(n); 
}