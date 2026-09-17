// Kadane's Algorithm (Max Subarray Sum)
// Given an integer array arr, find the contiguous subarray that has the maximum sum, and return that maximum sum.
//Example 1
// Input:
// arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// Output:
// 6


// Example 2
// Input:
// arr = [5, 4, -1, 7, 8]

// Output:
// 23

// Constraints
// 1 <= arr.length <= 10^5
// -10^4 <= arr[i] <= 10^4

int subarraySum(vector<int>& arr, int n, int maxSum, int currentSum){
    maxSum = arr[0];
    currentSum = 0;
    for(int i = 0; i<n; i++){
        currentSum += arr[i];

        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}