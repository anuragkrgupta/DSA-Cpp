// find the sqrt using binary search.
#include<iostream>
using namespace std;
int check( int x){
    int start = 0;
    int end = x;
    int ans = -1;
    while(start <= end){
        long long int mid = start + (end - start)/2;
        long long int sqr = mid * mid;
        if(sqr == x/mid){
            return mid;
        }
        else if(sqr < x) {
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