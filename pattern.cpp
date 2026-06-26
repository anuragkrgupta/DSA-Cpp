#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    i=1;
    cin>>n;
    while (i<=n)
    {
            j=1;

        while(j<=n){
            // cout<< j; for ascending order
            cout<< n-j+1; //for descending order
            j = j+1; 
        }
        cout<<endl;
        i = i+1;
    }
    
}

// printing numbers