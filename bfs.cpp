/**
 * Two pointer sliding window: .
 * 
 */

#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,18,5,6,8,20,21,10};
    int l=sizeof(arr)/sizeof(arr[0]);
    int i,k=4;
    int sum=0;
    int maxSum=0;
    for(i=0;i<k;i++){
        sum+=arr[i];
    }
    maxSum=sum;
    for(i=k;i<l;i++){
        sum+=arr[i]-arr[i-k];
        maxSum = (sum>maxSum)?sum:maxSum;
    }
    cout << "Maximum Sum : " << maxSum <<endl;
    return 0;
}