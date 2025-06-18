#include<bits/stdc++.h>
using namespace std;

void PrintNTimes(int n , string name){
    if(n == 0){
        return;
    }
    cout<<n<<" "<<name<<endl;

    PrintNTimes(n-1 , name);
    // cout<<n<<" ";
}

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int SumofN(int n , int ans){
    if(n == 0){
        return ans;
    }
    ans += n;
    SumofN(n-1,ans);
}

void reverseArray(int arr[] , int start , int end){
    if(start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr , start+1 , end-1);
}

bool checkPalindrome(string name , int start , int end){
    if(start == end) return true;
    if(name[start] != name[end]) return false;
    checkPalindrome(name , start+1 , end-1);
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    string name;
    cin>>name;
    int ans = 0;
    int arr[n] = {1,2,3,4,5};
    string temp;
    cin>>temp;
    PrintNTimes(n , name);
    cout<<SumofN(n,ans)<<endl;;
    cout<<factorial(n)<<endl;
    reverseArray(arr , 0 , n);
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<checkPalindrome(temp , 0 , temp.size()-1)<<endl;
    cout<<fibonacci(6);
    return 0;
}