// Given a sorted array of integers nums in ascending order and an integer target, find the index of target.
// If target is not present, return -1.

// Example 1
// Input:
// nums = [-1, 0, 3, 5, 9, 12]
// target = 9
// Output:
// 4
// Because:
// nums[4] = 9

// Example 2
// Input:
// nums = [-1, 0, 3, 5, 9, 12]
// target = 2
// Output:
// -1
// 2 doesn't exist in the array.

// Example 3
// Input:
// nums = [2, 5, 7, 10, 14, 18, 21]
// target = 14
// Output:
// 4

// Constraints
// 1 <= nums.length <= 10^5
// -10^9 <= nums[i] <= 10^9
// nums is sorted in ascending order
// All elements are unique

int search(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size() - 1;
    while ( start <= end ){
        int mid = start + (end - start) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }

    }
    return -1;
}