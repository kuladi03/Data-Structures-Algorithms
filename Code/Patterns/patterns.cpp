#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i = 0 ; i < n ; i++){
        // first 1st blank space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }

        // for star
        for(int j = 0 ; j < (2*i)+1 ; j++){
            cout<<"*";
        }

        // for 2nd blank space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < (2*(n-i))-1 ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < i ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < (2*i)+1 ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < (2*(n-i))-1 ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < i ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int temp = 1;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0) temp = 1;
        else temp = 0;
        for(int j = 0 ; j <= i ; j++){
            cout<<temp;
            temp = temp^1;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i = 0 ; i < n ; i++){
        //  Left triangle
        for(int j = 0 ; j <= i ; j++){
            cout<<j+1;
        }

        // Blank Space 
        for(int j = 0 ; j < 2*(n-i)-2 ; j++){
            cout<<" ";
        }

        //  Right traingle
        for(int j = i ; j >= 0 ; j--){
            cout<<j+1;
        }

        cout<<endl;
    }
}

void pattern13(int n){
    int temp = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<temp<<" ";
            temp += 1;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i = 0 ; i < n ; i++){
        char Ch = 'A';
        for(int j = 0 ; j <= i ; j++){
            cout<<Ch<<" ";
            Ch += 1;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i = 0 ; i < n ; i++){
        char ch = 'A';
        for(int j = 0 ; j < n-i ; j++){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char ch = 'A';
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<ch<<" ";
        }
        ch += 1;
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i = 0 ; i < n ; i++){
        char ch = 'A';
        
        // first blank space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }

        // pattern
        for(int j = 0 ; j <= (2*(i)+1)/2 ; j++){
            cout<<ch;
            ch += 1;
        }
        ch -= 1;
        for(int j = 0 ; j < (2*(i)+1)/2 ; j++){
            ch -= 1;
            cout<<ch;
        }

        //  last blank space

        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i = 0 ; i < n ; i++){
        char ch = 'A' + n-i-1;
        for(int j = 0 ; j <= i ; j++){
            cout<<ch;
            ch += 1;
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<"*";
        }

        for(int j = 0 ; j < 2*i ; j++){
            cout<<" ";
        }

        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }

        for(int j = 0 ; j < 2*(n-i-1) ; j++){
            cout<<" ";
        }

        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern20(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }

        for(int j = 0 ; j < 2*(n-i-1) ; j++){
            cout<<" ";
        }

        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < 2*i ; j++){
            cout<<" ";
        }

        for(int j = 0 ; j < n-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern21(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
          if(i == 0 || i == n-1){
            cout<<"*";
          } else if(j == 0 || j == n-1){
            cout<<"*";
          } else {
            cout<<" ";
          }
        }
        cout<<endl;
    }
}

void pattern22(int n){
    int s = 2*n - 1;
    for(int i = 0 ; i < s ; i++){
        for(int j = 0 ; j < s ; j++){
            int minDist = min(min(i,j),min(s-1-i,s-1-j));
            cout<<n - minDist;
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Pattern 1 is :\n";
    pattern1(5);

    cout<<"Pattern 2 is :\n";
    pattern2(4);

    cout<<"Pattern 3 is :\n";
    pattern3(5);

    cout<<"Pattern 4 is :\n";
    pattern4(5);

    cout<<"Pattern 5 :\n";
    pattern5(5);

    cout<<"Pattern 6 is :\n";
    pattern6(4);

    cout<<"Pattern 7 is :\n";
    pattern7(5);

    cout<<"Pattern 8 is :\n";
    pattern8(5);

    cout<<"Pattern 9 is :\n";
    pattern9(5);

    cout<<"Pattern 10 is :\n";
    pattern10(5);

    cout<<"Pattern 11 is :\n";
    pattern11(5);

    cout<<"Pattern 12 is :\n";
    pattern12(8);

    cout<<"Pattern 13 is :\n";
    pattern13(5);

    cout<<"Pattern 14 is :\n";
    pattern14(5);

    cout<<"Pattern 15 is :\n";
    pattern15(5);

    cout<<"Pattern 16 is :\n";
    pattern16(5);

    cout<<"Pattern 17 is :\n";
    pattern17(5);

    cout<<"Pattern 18 is :\n";
    pattern18(5);

    cout<<"Pattern 19 is :\n";
    pattern19(5);

    cout<<"Pattern 20 is :\n";
    pattern20(5);

    cout<<"Pattern 21 is :\n";
    pattern21(10);

    cout<<"Pattern 22 is :\n";
    pattern22(5);

    return 0;
}