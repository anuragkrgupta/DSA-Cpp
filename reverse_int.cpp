#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    while (n != 0) {
        int digit = n % 10;

        // Check for overflow before updating ans
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
            cout << 0;
            return 0;
        }

        // Check for underflow
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) {
            cout << 0;
            return 0;
        }

        ans = ans * 10 + digit;
        n /= 10;
    }

    cout << ans;
    return 0;
}