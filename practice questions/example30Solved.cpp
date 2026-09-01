// you are given an integer n. A 0-indexed integer array nums of length n+1 is generated following the rules:
// 1. num[0] = 0;
// 2. num[1] = 1;
// 3. num[2*i] = num[i], when 2 <= 2*i <= n;
// 4. num[2*i] = num[i] + num[i+1], when 2 <= 2*i+1 <= n;
// return the maximum integer in the array nums.
#include <iostream>
#include <vector>
using namespace std;

int getMaximumGenerated(int n) {

    if (n == 0)
        return 0;

    vector<int> nums(n + 1);

    nums[0] = 0;
    nums[1] = 1;

    int maximum = 1;

    for (int i = 1; i <= n / 2; i++) {
        nums[2 * i] = nums[i];
        if (2 * i + 1 <= n) {
            nums[2 * i + 1] = nums[i] + nums[i + 1];
        }
        maximum = max(maximum, nums[2 * i]);

        if (2 * i + 1 <= n) {
            maximum = max(maximum, nums[2 * i + 1]);
        }
    }

    return maximum;
}

int main() {

    int n;
    cin >> n;
    cout << getMaximumGenerated(n);
    return 0;
}