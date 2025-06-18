#include<bits/stdc++.h>
using namespace std;

int PivotIndex(vector<int> &arr , int low , int high){
    int pivot = arr[low];
    int left = low;
    int right = high;
    while(left < right){
        while(arr[left] <= pivot && left <= high-1){
            left++;
        }
        while(arr[right] > pivot && right >= low+1){
            right--;
        }
        if(left < right) swap(arr[left],arr[right]);
    }   
    swap(arr[right],arr[low]);
    return right;
}

void QuickSort(vector<int> &arr , int low , int high){
    if(low < high){
        int pivotIndex = PivotIndex(arr , low , high);
        QuickSort(arr , low , pivotIndex-1);
        QuickSort(arr , pivotIndex+1 , high);
    }
}

int main(){
    vector<int> arr = {32,695,62,95,9652,6,95,626995,69,6595526,962};
    QuickSort(arr , 0 ,arr.size()-1);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}