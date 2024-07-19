#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        int min = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[min]){
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    vector<int> arr = {65465,54,81,4,56,8,456,265,5162,625,126};
    cout << "Sorted array is : ";
    SelectionSort(arr);
    for(int i =0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}