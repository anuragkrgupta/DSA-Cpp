// Problem:
// Given an array of integers nums and an integer target, find two different indices such that the values at those indices add up to target.
// Return the indices of those two elements.
// Input:
// nums = [2, 7, 11, 15]
// target = 9

// Output:
// [0, 1]

// Constraints:

// 2 <= nums.length <= 10^5
// -10^9 <= nums[i] <= 10^9
// Exactly one valid pair exists.
// You cannot use the same element twice.

//brute force
vector<int> twoSum(vector<int>& arr, int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

//hash-map
vector<int> twoSum(vector<int>& arr, int n, int target) {

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {
        int needed = target - arr[i];
        if(mp.find(needed) != mp.end()) {
            return {mp[needed], i};
        }
        mp[arr[i]] = i;
    }
    return {};
}