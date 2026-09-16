#include<bits/stdc++.h>
using namespace std;
int changes(int *p, int *q){
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    cout << "a= " << *p << " "<< "b= " << *q << endl;
    return 0;
}

int main(){
    int a = 0;
    int b = 1;
    changes(&a, &b);
    return 0;
}