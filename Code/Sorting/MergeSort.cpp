#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr , int low , int mid , int high){
    int left = low;
    int right = mid+1;
    vector<int> Sorted_array;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            Sorted_array.push_back(arr[left]);
            left++;
        } else {
            Sorted_array.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        Sorted_array.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        Sorted_array.push_back(arr[right]);
        right++;
    }
    for(int i = low ; i <= high ; i++){
        arr[i] = Sorted_array[i-low];
    }
}

void MergeSort(vector<int> &arr , int low , int high){
    if(low >= high) return;
    int mid = (low + high) / 2;
    MergeSort(arr , low , mid);
    MergeSort(arr , mid+1 , high);
    Merge(arr , low , mid , high);
}

int main(){
    vector<int> arr = {32,695,62,95,9652,6,95,626995,69,6595526,962};
    MergeSort(arr,0,arr.size()-1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}