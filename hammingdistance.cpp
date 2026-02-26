#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int a,b;
    cin>>a;
    cin>>b;
    int x=a^b;
    while(x!=0){
        // cout<<x;
        if(x&1){
            count++;
        }
        x=x/2;
    }
    cout<<count;

    return 0;
}
            