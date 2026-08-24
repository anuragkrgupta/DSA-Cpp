// length of a string-----------------------
// #include<iostream>
// int main(){
//     char name[10];
//     std::cout<< "Enter your name: ";
//     std::cin >> name;
//     int count = 0;
//     // name[2] = '\0';
//     int n = sizeof(name)/sizeof(name[0]);
//     for(int i = 0; name[i] != '\0'; i++){
//         std :: cout << name[i] << " " << std::endl;
//         count++;
//     }
//     std :: cout << count;
//     return 0;
// }

//reverse a string ----------------------------------
// #include<iostream>
// void rev(char string[], int s, int e){
//  while(s<e){
//         std:: swap(string[s], string[e]);
//         s++;
//         e--;
//     }
// }
// int main(){
//     char string[20];
//      std :: cout << "Enter a string: ";
//     std :: cin >> string;
//     int s = 0;
//     int e = 0;
//     for(int i = 0; string[i] != '\0'; i++){
//         e++;
//     }
//     e--;
//     rev(string,s,e);
//     for(int i = 0; string[i] != '\0'; i++){
//         std :: cout << string[i] << " ";
//     }
//     return 0;
// }

//check palindrome 
#include<iostream>
void check(char arr[], int len){
    int s = 0;
    int e = len-1;
    while(s<e){
        if(arr[s] != arr[e]){
            std :: cout << "Not a palindrome!";
            return;
        }
        s++;
        e--;
    }
    std:: cout << "Is a palindrome!";
    
}

int main(){
    char arr[10];
    std :: cout<<"Enter your string: ";
    std:: cin>>arr;
    int len = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        len++;
    }
    // len --;
    check(arr, len);
    return 0;
}