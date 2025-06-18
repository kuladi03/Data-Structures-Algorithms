#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr , int key){
    int start = 0;
    int end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
    cout<<"The Key is at index : "<<BinarySearch(arr,0);
    return 0;
}