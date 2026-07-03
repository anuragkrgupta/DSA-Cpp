//lets do it by simply dividing the integer by 2

// #include<iostream>
// using namespace std;
// int main() {
//     int n, i;
//    cin >> n;
//     int ans [10]= {};
//     for ( i=0; n!=0; i++){
//         ans[i] = n%2;
//         n = n/2;

//     }
//     for (int j=i-1; j>=0; j--){
//         cout<< ans[j];
//     }
//     return 0;
// }

// now we will follow some different approach
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;

        cout << "bit = " << bit << ", ans = " << ans << endl;

        n = n >> 1;
        i++;
    }

    cout << ans;
}
