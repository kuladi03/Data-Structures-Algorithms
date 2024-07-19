#include<iostream>
using namespace std;

int main(){

    int row , col ;
    cout<<"Enter the number of rows and columns of a matrix : "<<endl;
    cin>>row>>col;
    int arr[row][col];

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}