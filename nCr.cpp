// here we calculate the nCr of any number
// formula :- nCr = n! / r! - (n-r)!
#include <iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int n, r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    if (r > n || n < 0 || r < 0) {
        cout << "Invalid input";
        return 0;
    }

    int ans = fact(n) / (fact(r) * fact(n - r));

    cout << "nCr = " << ans;

    return 0;
}