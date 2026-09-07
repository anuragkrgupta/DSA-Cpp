#include<bits/stdc++.h>
using namespace std;
 int main(){
//    int arr[] = {1, 2, 3, 4, 5};
//    int a = 10;
//    double b = 10;
//    int *ptr = &a;
//    cout << ptr << endl; //0xd21e9ff6fc , always diffrent.
//    cout << *ptr << endl; //10

//    //lets see what is the diffrence in size of pointer and variable;
//     cout << "size of pointer: "<< sizeof(*ptr) << endl; //4
//     cout << "size of variable: " << sizeof(&a) << endl; //8
//     cout << "size of variable: " << sizeof(&b) << endl; //8


//     int *p = ptr; // copying the address of two pointers 
//     cout << p << "-" << ptr << endl;
//     cout << *p << "-" << *ptr << endl; // which mean the values will be also copying. now both the address stored same value and addresss.


    //arithmetic calculation using pointers
    int ab = 10;
    int *ac = &ab;
    cout <<++(*ac)<< endl; //incrementing by 1 before printing;
    ac = ac + 1; // by doing this , this will not increase the value, it will jump to the nect address. 
    cout << *ac << endl;
   return 0;
 }