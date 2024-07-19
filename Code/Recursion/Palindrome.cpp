#include<iostream>
using namespace std;

bool checkPalindrome(string name , int i , int n){
    if(i > n/2){
        return true;
    }
    if(tolower(name[i]) != tolower(name[n-1-i])){
        return false;
    }
    return checkPalindrome(name , i+1 , n);
}
int main(){
    string name = "Nayan";
    int n = name.length();
    if(checkPalindrome(name , 0 , n)){
        cout<<"String is a Palindrome"<<endl;
    } else {
        cout<<"String is not a Palindrome"<<endl;
    }
    return 0;
}