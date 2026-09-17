// Given an integer array nums, move all 0s to the end of the array while maintaining the relative order of the non-zero elements.

// You must modify the array in-place.

// Example 1
// Input:
// nums = [0, 1, 0, 3, 12]

// Output:
// [1, 3, 12, 0, 0]
// Example 2
// Input:
// nums = [0, 0, 1]

// Output:
// [1, 0, 0]
// Example 3
// Input:
// nums = [1, 2, 3]

// Output:
// [1, 2, 3]
// Constraints
// 1 <= nums.length <= 10^4
// -2^31 <= nums[i] <= 2^31 - 1

void moveZeroes(vector<int>& nums) {
    int i = 0;
    for(int j = 0; j < nums.size(); j++) {
        if(nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}