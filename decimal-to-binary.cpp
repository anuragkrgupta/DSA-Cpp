//lets do it by simply dividing the integer by 2

// #include<iostream>
// using namespace std;
// int main() {
//     int n, i;
//    cin >> n;
//     int ans [10]= {};
//     for ( i=0; n!=0; i++){
//         ans[i] = n%2; // it is for calculating reminder
//         n = n/2; // it is for calculating quotiont

//     }
//     for (int j=i-1; j>=0; j--){  //it is for reversing the array
//         cout<< ans[j];
//     }
//     return 0;
// }

// now we will follow some different approach
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    if (n < 0) {
        cout << "-";
        n = -n;     
    }

    int ans = 0;
    int place = 1;

    while (n != 0) {
        int bit = n & 1;  //it calculates the last bit of an integer
        ans = ans + bit * place; 
        place *= 10;
        n = n >> 1; //right shift by 1
    }

    cout << ans;

    return 0;
}
