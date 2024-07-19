#include<iostream>
using namespace std;

// Print Name 5 times

void PrintName(string &name , int &count){
    if(count == 5){
        return ;
    }
    cout<<name<<endl;
    count++;
    PrintName(name , count);
}

// Print linearly from 1 to N

void printLinearly(int &count1 , int N){
    if(count1 > N){
        return ;
    }
    cout<<count1<<" ";
    count1++;
    printLinearly(count1 , N);
}

void printNto1(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<" ";
    printNto1(n-1);
}

void BacktracktoN(int &count2 , int N){
    cout<<count2<<" ";
    if(count2 >= N){
        return ;
    }
    count2 += 1;
    BacktracktoN(count2, N);  
}

int main(){

    // Q1. Print Name 5 times
    string name = "Aditya";
    int count = 0;
    PrintName(name , count);

    // Q2. Print linearly from 1 to N
    int count1 = 1;
    printLinearly(count1 , 15);

    // Q3. Print from N to 1
    printNto1(10);

    // Q4. Print linearly from 1 to N ( Use Backtracing )
    int count2 = 0;
    BacktracktoN(count2 , 15);
    return 0;
}