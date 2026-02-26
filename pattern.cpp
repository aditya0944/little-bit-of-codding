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
void print12(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j =0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
void print13(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            cout << " ";
        }
        cout << "*";

    }
    
}
void print14(int n){
    //first numbers
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << j;      
        
        }
        
        //break
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        
        //numbers
        for (int j = i; j >=1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space - 2;
        
    }
    
}
void print15(int n){
    int num=1;
    for (int i = 1; i <=n; i++)
    {
        for(int j = 1; j<=i; j++){
            cout << num << " ";
            num=num+1;
        }
        cout << endl;
    }
    
}
void print16(int n){
    for(int i = 1; i<= n; i++){
        char c = 65;
        for(int j = 1; j<=i; j++){
            cout << c;
            c = c + 1;
        }
        cout << endl;
    }
}
void print17(int n){
    for(int i = 1; i<= n; i++){
        char c = 65;
        for(int j = 1; j<=n-i+1; j++){
            cout << c;
            c = c + 1;
        }
        cout << endl;
    }
}
void print18(int n){
    char c = 65;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<=i; j++){
            cout << c;
        }
        cout << endl;
        c = c + 1;
    }
}
void print19(int n){
    for(int i = 0; i< n; i++){
        char c = 65;
        //spaces
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        int breakdown = (2*i+1)/2;
        for(int j = 1; j<=2*i+1; j++){
            cout << c;
            if (j<=breakdown) c++;
            else c--;
        }
        //spaces
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print20(int n){
    char c = 65;
    c = c+n;
    for(int i = 1; i<= n; i++){
        for(int j = i; j>=1; j--){
            cout << c;
        }
        cout << endl;
        c = c + 1;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        print20(n);
    }
}
    
