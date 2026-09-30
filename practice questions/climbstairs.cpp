// You have been given a number of stairs initially you are at the 0th stairs and you need to reach the Nth stair. Each time you can either climb 1 step or 2 steps you are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.

#include <iostream>
using namespace std;
int CS(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return CS(n - 1) + CS(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways: " << CS(n) << endl;
    return 0;
}