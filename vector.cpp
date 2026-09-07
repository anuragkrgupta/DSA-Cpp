#include <bits/stdc++.h>
using namespace std;
// int vv(vector<int>& v){
// v.push_back(10); // inserting 1 value to the back of the vector.
// v.insert(v.end(), {1,2,3,4}); // inserting multiple values to the back of the vector.
// vector<int>::iterator it = v.end() - 1; // defining iterators in the vector where 'it' is the name of the iterator and 'v.end() - 1' means the last element of the vector.
// cout << *(it) << " "; // '*' it point to the address of the elements, and 'it' locates the what stored in that element.
// return 0;
// }

// int main(){
//     //vector is dynamic in nature, it has no size limit.
//     vector<int> v = {1, 2, 3, 4, 5};   // initializing vector.
//     vv(v);
//     // for(int x : v){ // x : v - means storing all the values of v one-by-one into x. this is equivalent to   for(int i = 0; i<v.size(); i++){ int x[i] = v; cout<< x[i] << " "; }
//     //     cout<< x << " ";
//     // }
//     // cout << endl;
//     // cout << vv(v);
//     return 0;
// }

void itrtr(vector<int>& itr){
    auto a = 10;
    itr.insert(itr.end(), a); // inserting a=10 at the last of the vector
    itr.insert(itr.begin(), a); // inserting a=10 at the end of the vector
    // vector<int>::iterator b = itr.end() - 1;
    // cout << *(b);
    itr.erase (itr.begin()+1 , itr.begin()+3);
    for(auto it = itr.begin(); it!=itr.end(); it++){ // this is how iterator loop runs and it prints all the elements of vector;
        cout << *(it)<< " ";
    }
    cout<<endl;
}

int main(){
vector<int> itr = {1, 2, 3, 4, 5, 6};
itrtr(itr);


for(auto x : itr){  // this is the simplest way to write iterator loop and print all the element of vector by storing all element one-by-one into the x;
    cout << x << " ";
}

return 0;
}