// say the digits in english . for example: 321 = three two one; 415 = four one five;
// Note: This version handles non-negative integers. Negative numbers would need additional handling.
#include <bits/stdc++.h>
using namespace std;
string words[] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
};
void printDigits(int n) {
    if (n == 0) {
        return;
    }

    int digit = n % 10;      // Extract the last digit
    printDigits(n / 10);     // Process the remaining number
    cout << words[digit] << " ";
}

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << words[0];
    } else {
        printDigits(n);
    }
    return 0;
}