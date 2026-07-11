// finding the largest number without using array, approach is - storing the input in a variable and comparing it continuously with input , if the input is smaller than the previous number take another input otherwise store the new input in a variable.

#include <iostream>
using namespace std;
int largestNum()
{
    int input;
    cin >> input;
    int currentNum = input;
    cout << "enter the next integer: ";
    cin >> input;
    while (input != 0)
    {
        if (currentNum <= input)
        {
            currentNum = input;
        }
        cout << "enter the next integer: ";
        cin >> input;
    }

    cout << currentNum << " : is the largest number";
    return currentNum;
}
int main()
{
    largestNum();
}