#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr){
    for(int i = 0 ; i < arr.size()-1 ; i++){
        for(int j = i+1 ; j > 0 ; j--){
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}
int main(){
    vector<int> arr = {54,54,6,6,3598,322,65,98,15,79563,26};
    InsertionSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}