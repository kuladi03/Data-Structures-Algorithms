//  Selection Sort : Here we select min elements and place it to front
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>& arr){
    for(int i = 0 ; i < arr.size()-1 ; i++){
         int min_index = i;
        for(int j = i ; j < arr.size() ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    vector<int> arr = {3,54,5,421,654,1,62,32,3212,32,21,6};
    SelectionSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}