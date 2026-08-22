// Given an aray, rotate the array to the right by K steps, where k is non-negative.
// Input: nums = [1,2,3,4,5,6,7],    k=3
// Output: [5,6,7,1,2,3,4]
// leetcode : 189

#include <iostream>

void reverse(int arr[], int start, int end) {

    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(int arr[], int n, int k) {

    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int size = sizeof(arr) / sizeof(arr[0]);

    int k;

    std::cout << "Enter the number of positions to rotate: ";
    std::cin >> k;

    rotate(arr, size, k);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}