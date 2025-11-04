#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }

}
void print2(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}
void print3(int n){
for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout << i ;
        }
        cout << endl;
    }
}    
//till here all the number patterns now star ones
void print4(int n){
for(int i = 1;i<=n;i++){
        for(int j = 0;j<=n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print5(int n){
for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){
            cout << j ;
        }
        cout << endl;
    }
}
//have to work again on the below code with different approach
void print6(int n){
for(int i = 0;i<n;i++){
        //space
        for(int j = 0;j<n-i-1;j++){
            cout << " ";
        }
        //star
        for(int j = 0;j<2*i+1;j++){
            cout << "*";
        }
        //space
        for(int j = 0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
//thode se mahnat on the below wala code also 
void print7(int n){
for(int i = 0;i<n;i++){
        //space
        for(int j = 0;j<i;j++){
            cout << " ";
        }
        //star
        for(int j = 0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        //space
        for(int j = 0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print10(int n){
    for(int i = 1;i<=2*n-1;i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }

}
void print11(int n){
    int start = 0;
    for(int i = 1;i<=n;i++){
        if(i % 2 == 0 ){
            start = 0;
        }
        else{
            start = 1;
        }
        for(int j = 0;j<i;j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        print10(n);
    }
}
    