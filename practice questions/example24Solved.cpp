// add two numbers represented by arrays
#include <iostream>
using namespace std;

void add(int arr1[], int n1, int arr2[], int n2, int result[]) {

    int i = n1 - 1;
    int j = n2 - 1;
    int k = n1;       // Important: start one position later
    int carry = 0;

    while (i >= 0 || j >= 0) {

        int sum = carry;

        if (i >= 0)
            sum += arr1[i--];

        if (j >= 0)
            sum += arr2[j--];

        result[k--] = sum % 10;

        carry = sum / 10;
    }

    // Store remaining carry
    if (carry > 0) {
        result[k] = carry;
    }
}

int main() {

    int arr1[] = {9, 9};
    int arr2[] = {9, 9};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Maximum result size = max(n1,n2) + 1
    int result[3] = {0};

    add(arr1, n1, arr2, n2, result);

    for (int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }

    return 0;
}