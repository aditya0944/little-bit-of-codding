#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> digits{1,2,3};
    int x = 0;
    for(int i = 0;i<digits.size();i++){
        x=x*10+digits[i];
    }
    cout<<x;
    return 0;
}