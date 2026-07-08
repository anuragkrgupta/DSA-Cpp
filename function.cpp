//calculate the of pow(a, b).
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int a, b;
//     cout<<"enter the number: ";
//     cin>> a;
//     cout<< "enter the power: ";
//     cin >> b;

//     int ans = pow(a, b);
//     cout<< ans;
//     return 0;
// }

//using function 
//write a code to check whether the number is an even number or an odd number.
#include<iostream>
#include<math.h>
using namespace std;
void check(){
    int a;
    cin >>a;
    if (a%2 == 0)
    {
        cout<< " even";
    }
    else{
        cout<< " odd";
   }

}

int main() {
  check();
}