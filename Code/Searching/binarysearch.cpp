#include<bits/stdc++.h>
using namespace std;

int Binarysearch(int *arr , int target , int size){
    int low = 0;
    int high = size;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            return mid;
        } else if(target < arr[mid]){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<Binarysearch(arr , 10 , 10);

    return 0;
}