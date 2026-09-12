// Given a non-negative integer s represented as a string, count the number of digits in s that divide the number represented by s.
// A digit is considered valid only if it is non-zero and the number represented by s is divisible by that digit.
// If a digit appears multiple times in s, each occurrence should be counted separately.

// Examples:

// Input: s = "35"
// Output: 1
// Explanation: The digit 5 divides 35, but the digit 3 does not. So the answer is 1.
// Input: s = "1122324"
// Output: 7
// Explanation: Every digit in "1122324" divides 1122324. So the answer is 7.

// Constraints:
// 1 ≤ s.size() ≤ 106
// s contains: [0-9].

// Expected Complexities
// Time Complexity: O(n)
// Auxiliary Space: O(1)

class Solution {
public:
    int divisibleByDigits(string& s) {
        int count = 0;

        // remainder[d] = number represented by s % d
        int remainder[10] = {0};

        for (char c : s) {
            int digit = c - '0';

            for (int d = 1; d <= 9; d++) {
                remainder[d] = (remainder[d] * 10 + digit) % d;
            }
        }

        // Check every occurrence separately
        for (char c : s) {
            int digit = c - '0';

            if (digit != 0 && remainder[digit] == 0) {
                count++;
            }
        }

        return count;
    }
};