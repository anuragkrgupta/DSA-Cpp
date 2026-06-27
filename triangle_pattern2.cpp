// input: 4
// output: 
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 

// #include<iostream>
// using namespace std;
// int main() {
//     int row, col, n;
//     cin >> n;
//     row = 1;
//     while (row<=n) {
//         col = 1;
//         int value = row;
//         while (col <= row){
//             cout << value;
//             value= value + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

//reverse the pattern
// input: 4
// output: 
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
#include<iostream>
using namespace std;
int main() {
    int row, col, n;
    cin >> n;
    row = 1;
    while(row <= n){
        col = 1;
        int value = row;
        while(col <= row){
            cout << value << " ";
            value = value -1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

}