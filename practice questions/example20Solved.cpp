// merging two sorted array 
// You are given to integer arrays num1 and num2. Sorted in non decreasing order. And two integers m and n representing the number of elements in num1 and num2 Respectively. Merge num1 and num2 into a single array. Sorted in non decreasing order. The final sorted array should not be returned by the function, but instead we stored inside the array num1. To accommodate this, number one has a length of M+N. Where the first m element denotes the element that should be merged and the last n elements are set to 0 and should be ignored. Num2 has a length of N. 

#include <iostream>
#include <vector>

void merge(std::vector<int>& arr1, int m, std::vector<int>& arr2, int n) {

    int a = m - 1;
    int b = n - 1;
    int k = m + n - 1;

    while (a >= 0 && b >= 0) {

        if (arr1[a] > arr2[b]) {
            arr1[k] = arr1[a];
            a--;
        }
        else {
            arr1[k] = arr2[b];
            b--;
        }

        k--;
    }

    while (b >= 0) {
     arr1[k] = arr2[b];
         b--;
        k--;
    }
}

int main() {

    std::vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> arr2 = {2, 3, 4};

    int m = 3;
    int n = 3;

    merge(arr1, m, arr2, n);

    for (int i = 0; i < arr1.size(); i++) {
        std::cout << arr1[i] << " ";
    }
}