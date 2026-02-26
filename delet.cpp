#include<bits/stdc++.h>
using namespace std;
void print2(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j =0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
void print1(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }

}
void print3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
            
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
}
void print4(int n){
    char c = 'a';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            cout << " ";
            
        }
        for (int j = i; j >=1; j--)
        {
            // c = c - i + 1;
            cout << c++;
        }
        
        cout << endl;
    }
}
void print6(int n){
    char c = 'a';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            cout << " ";
            
        }
        for (int j = 1; j <=i; j++)
        {
            
            cout << c--;
        }
        c+=2*i+1;
        cout << endl;
    }
}
void print5(int n){
    for (int i = n-1; i >= -n+1; i--)
    {
        for (int j = -n+1; j <= n-1; j++)
        {
           if(abs(i)+abs(j)>n-1){
            cout << "  ";
        } 
        else{
            cout << "* ";
           }
        }
        cout << endl;
    }
    
    
}
int main(){
        int n;
        cin >> n;
        print6(n);
    }


    

   