#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int firstNumber = 0;
    int nextNumber = 1;
    cout << firstNumber << " " << nextNumber << " " ;
    int sum=0;
    for (int i=0; i<=n; i++){
        sum= firstNumber + nextNumber;
        cout<< sum << " ";
        firstNumber = nextNumber;
        nextNumber = sum;
    }

    


}
