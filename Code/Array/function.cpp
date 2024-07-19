#include<iostream>
using namespace std;

int sum(int n , int arr[]){
    int result = 0;
    for(int i = 0 ; i < n ; i++){
        result += arr[i];
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<sum(n,arr);
    return 0;
}

