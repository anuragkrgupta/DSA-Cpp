#include<iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    int prod = 1;
    int sum = 0;
   
    while (n > 0)
    {
        x = n%10;
        n = n/10;
        prod = prod * x;
        sum = sum + x;
    }
    cout<< (prod-sum);
}