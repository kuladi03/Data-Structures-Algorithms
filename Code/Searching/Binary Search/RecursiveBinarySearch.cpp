#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr , int key , int start , int end){
    if(start > end) return -1;
    int mid = start + (end-start)/2;
    if(arr[mid] == key) return mid;
    else if (key > arr[mid]) return BinarySearch(arr , key , mid+1 , end);
    else return 
    BinarySearch(arr , key , start , mid-1);
}

int main(){

    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
    cout<<"The key is at index : "<<BinarySearch(arr , 10 , 0 , arr.size()-1);
    return 0;
}