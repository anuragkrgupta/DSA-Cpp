// implementing recursive number-to-English conversion in C++ using the Indian numbering system, supporting numbers up to lakhs. 
#include <bits/stdc++.h>
using namespace std;

string ones[] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine"
};

string teens[] = {
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

string tens[] = {
    "", "", "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy", "eighty", "ninety"
};

// Converts numbers from 0 to 999 into words
string under1000(int n) {
    if (n == 0) {
        return "";
    }

    if (n >= 100) {
        int hundreds = n / 100;
        int remainder = n % 100;

        string result = ones[hundreds] + " hundred";

        if (remainder > 0) {
            result += " " + under1000(remainder);
        }

        return result;
    }

    if (n < 10) {
        return ones[n];
    }

    if (n < 20) {
        return teens[n - 10];
    }

    int tensDigit = n / 10;
    int onesDigit = n % 10;

    string result = tens[tensDigit];

    if (onesDigit > 0) {
        result += " " + ones[onesDigit];
    }

    return result;
}

string numberToWords(int n) {
    if (n == 0) return "zero";

    string result = "";

    int crores = n / 10000000;
    n %= 10000000;

    int lakhs = n / 100000;
    n %= 100000;

    int thousands = n / 1000;
    n %= 1000;

    int remainder = n;

    if (crores > 0) {
        result += under1000(crores) + " crore";
    }

    if (lakhs > 0) {
        if (!result.empty()) result += " ";
        result += under1000(lakhs) + " lakh";
    }

    if (thousands > 0) {
        if (!result.empty()) result += " ";
        result += under1000(thousands) + " thousand";
    }

    if (remainder > 0) {
        if (!result.empty()) result += " ";

        // Use "and" only when the final remainder is below 100
        // and a higher group exists.
        if (remainder < 100 && !result.empty()) {
            result += "and ";
        }

        result += under1000(remainder);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 9999999) {
        cout << "Number out of supported range";
        return 0;
    }

    cout << numberToWords(n) << '\n';

    return 0;
}
