#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the limit: ";
    cin >> n;
    cout << "sum of all the number from 1 to "<< n <<": ";
    long long sum = 0;
    for (
        int i=1; 
        i<=n;
        i++
    ) {
        sum += i;
    }
    cout << sum;
}