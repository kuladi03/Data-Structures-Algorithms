#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    vector<int> arr = {5,15,62,62,6,26,55,556,56,56,23,32,62,3232};
    BubbleSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}