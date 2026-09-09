// Given a positive integer N, define its Reverse Prefix Sum (RPS) as follows:

// For every prefix of N from left to right, reverse that prefix and convert it back to a number. The RPS is the sum of all these reversed prefix numbers.

// For example, for:
// N = 1234
// The prefixes are:
// 1      → 1
// 12     → 21
// 123    → 321
// 1234   → 4321

// Therefore:
// RPS(1234) = 1 + 21 + 321 + 4321
//           = 4664

int solve(int n) {
    vector<int> v;

    while(n > 0) {
        v.push_back(n % 10);
        n /= 10;
    }

    reverse(v.begin(), v.end());

    int prefix = 0;
    int sum = 0;

    for(int digit : v) {

        prefix = prefix * 10 + digit;

        int rev = 0;
        int temp = prefix;

        while(temp > 0) {
            int d = temp % 10;
            rev = rev * 10 + d;
            temp /= 10;
        }

        sum += rev;
    }

    return sum;
}