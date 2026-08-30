// remove space from the sentence and replace with @40.

#include<iostream>
void replaceSpace(char arr[], int len){
    for ( int i = 0; i<len; i++){
        if(arr[i] == ' '){
            for(int j = len; j>=i; j--){
                arr[j+2] = arr[j];
            }
            arr[i]='@';
            arr[i+1] = '4';
            arr[i+2] = '0';

            len += 2;
            i += 2;
        }  
    }
    std :: cout << arr;
}

int main(){
    char arr[30];
    std :: cout << "enter the string: ";
    std :: cin.getline(arr, 30);
    int len = 0;
    for(int i =0; arr[i] != '\0'; i++){
        len ++;
    }
replaceSpace(arr, len);
}