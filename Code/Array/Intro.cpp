#include<iostream>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,5,6,7};
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i];
    }
}