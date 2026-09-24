// Given an integer array containing only the digits 0, 1, and 2, find the frequency of each digit in the complete array and generate an output array where each element is formed by:
// frequency of the digit followed by the digit itself
// The output should be generated in the order 0, 1, 2.
// Input
// An array arr of N elements, where:

// N is not fixed.
// Every element is either 0, 1, or 2.
// Output
// Print three values corresponding to digits 0, 1, and 2.

// For each digit d:
// output[d] = frequency(d) followed by d

// Example 1
// Input:
// {0, 1, 2, 0, 1, 2}

// Frequencies:
// 0 → 2 times
// 1 → 2 times
// 2 → 2 times

// Therefore:
// Output:
// [20, 21, 22]

// Here:
// 20 → 0 occurs 2 times
// 21 → 1 occurs 2 times
// 22 → 2 occurs 2 times

// Example 2
// Input:
// {0, 1, 1, 1, 2, 0, 2, 1}

// Frequencies:
// 0 → 2
// 1 → 4
// 2 → 2

// Output:
// [20, 41, 22]

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {0,1,2,0,2,1,1,0,2};
    unordered_map<int, int> freq;
    for(int x : arr) {
        freq[x]++;
    }
    vector<int> ans;

    for(int i = 0; i < 3; i++) {
        ans.push_back(freq[i] * 10 + i);
    }

    for(int a : ans) {
        cout << a << " ";
    }
    return 0;
}