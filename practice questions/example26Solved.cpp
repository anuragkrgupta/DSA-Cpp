// maximum  occuring character
#include <iostream>

void maxi(char arr[], int len) {
    int freq[256] = {0};
    // Count each character
    for (int i = 0; i < len; i++) {
        if (arr[i] != ' ') {
        freq[arr[i]]++;
}
    }
    // Find maximum
    int max = 0;
    char ch;

    for (int i = 0; i < len; i++) {
        if (freq[arr[i]] > max) {
            max = freq[arr[i]];
            ch = arr[i];
        }
    }
    std::cout << "Maximum occurring character: " << ch << ", with frequency: " << max;
}

int main() {
    char arr[100];
    std::cout << "Enter the sentence: ";
    std::cin.getline(arr, 100);
    int len = 0;
    while (arr[len] != '\0') {
        len++;
    }
    maxi(arr, len);
    return 0;
}