// Given an array nums of size n, find the majority element.
// The majority element is the element that appears more than n / 2 times in the array.
// You may assume that a majority element always exists.

// Example 1
// Input:
// nums = [3, 2, 3]

// Output:
// 3

// Because 3 appears 2 times and:

// n = 3
// n / 2 = 1
// 2 > 1
// Example 2
// Input:
// nums = [2, 2, 1, 1, 1, 2, 2]

// Output:
// 2

// 2 appears 4 times out of 7.

// Constraints
// 1 <= nums.length <= 5 * 10^4
// -10^9 <= nums[i] <= 10^9

int majorityElement(vector<int>& nums){
    //if it appears more than n/2 times it is major element.
    unordered_map<int, int> freq;
    int n = nums.size();
    for(int i = 0;i<n; i++){
        freq[num[i]]++;
        if(freq[num[i]]> n/2){
            return num[i];
        }
    }
    return -1;
}