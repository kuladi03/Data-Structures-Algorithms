#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr){
    int size = arr.size();

    for(int i = size - 1 ; i >= 0 ; i--){
            int didswap = 0;
        for(int j = 0 ; j < i ; j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap += 1;
            }
        }

        if(didswap == 0){
            break;
        }
    }
}

int main(){

    vector<int> arr = {165,63532,165,234,65,6,5464,635,4651,986,565};
    BubbleSort(arr);

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}