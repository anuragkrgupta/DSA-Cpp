// ABC
// ABC
// ABC

// #include<iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A'+ col - 1;
//             cout<< ch;
//             col = col + 1;

//         }
//         cout<< endl;
//         row = row +1;

//     }

// }

//AAA
//BBB
//CCC

// #include<iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//     int row = 1;
//     while (row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A'+ row - 1;
//             cout<< ch;
//             col = col + 1;

//         }
//         cout<< endl;
//         row = row +1;

//     }

// }

//ABC
//DEF
//GHI

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int row = 1;
//      char value = 'A';
//     while (row <= n){
//         int col = 1;
//         while(col <= n){
//             cout << value;
//             value = value + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
         
//     }
// }

//ABC
//BCD
//CDE

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int row = 1;
    char x= 'A';
    while (row <= n) {
        
        int col = 1;
        while(col<=n){
            char ch = x + col - 1;
            // char ch = 'A' + row + col - 2;
            cout << ch;
            col++;

        }
        cout<< endl;
        row++;
        x++;
    }
}