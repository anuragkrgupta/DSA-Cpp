#include<bits/stdc++.h>
using namespace std;
void pass(int& n){ //pass by reference
    n++;
}

int main(){
    int a = 5;
    pass(a);
    cout<< a; // output updated
}