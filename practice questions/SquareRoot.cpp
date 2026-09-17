// Given a non-negative integer x, return the integer square root of x.
// The integer square root is the largest integer k such that:
// k × k <= x

// Do not use sqrt().

// Example 1
// Input:
// x = 4
// Output:
// 2
// Because:
// 2 × 2 = 4

// Example 2
// Input:
// x = 8
// Output:
// 2
// Because:
// 2 × 2 = 4
// 3 × 3 = 9  ❌
// Therefore:
// sqrt(8) = 2   // integer part

// Example 3
// Input:
// x = 25
// Output:
// 5

// Example 4
// Input:
// x = 1
// Output:
// 1

// Example 5
// Input:
// x = 0
// Output:
// 0

// Constraints
// 0 <= x <= 2^31 - 1

int mySqrt(int x){
    if(x<2){
        return x;
    }
    int start = 0;
    int end = x/2;
    int ans = 0;
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(mid <= x/mid){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}