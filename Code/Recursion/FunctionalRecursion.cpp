#include<iostream>
using namespace std;

void reverse(int arr[] , int start , int end){
    if(start > end){
        return ;
    }
    swap(arr[start] , arr[end]);
    reverse(arr , start+1 , end-1);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse(arr , 0 , 9);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}