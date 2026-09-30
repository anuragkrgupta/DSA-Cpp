// say the digits in english . for example: 321 = three two one; 415 = four one five;

void printDigits(int n) {
    if (n==0) {
        return;
    }
    int digit = n%10; //extracting the digits
    printDigits(n/10); //smaller number
    cout << words[digit] << " "; // printing the digits in word
}