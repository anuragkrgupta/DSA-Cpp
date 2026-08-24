// reversing word
#include<iostream>
void rev(char arr[], int len){
    int s = 0;
    for ( int i = 0; i<=len; i++){
        if(arr[i] == ' ' || arr[i] == '\0'){
            int e = i - 1;
            while(s < e){
                std :: swap(arr[s++], arr[e--]);
            }
            s = i + 1;
        }
    }
    
}

int main(){
char arr[20];
std :: cout << "enter the sentence: ";
std :: cin.getline(arr, 50);
int len = 0;
for (int i = 0; arr[i] != '\0'; i++){
    len ++;
}
rev(arr, len);

std :: cout << arr;
return 0;
}