#include<iostream>
using namespace std;

class Hero{
    
    // by default the access modifier is private

    int health = 100;
    char name[100];

    public:
    int level;
};

int main(){

    Hero ramesh;
    cout<<ramesh.level;
    return 0;
}