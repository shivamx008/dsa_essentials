#include<bits/stdc++.h>
using namespace std;

void subarrsum(int (*arr),int &n)
{
    int cs=0,maxs=INT_MIN;
    for(int i=0;i<n;i++)
    {   
        cs+=arr[i];
        maxs=max(cs,maxs);
        cs=max(cs,0);
    }
    cout<<maxs;
}
// O(n) time and constant space
int main()
{
    // we maintain a running sum (current sum), and checking it against a max sum , we don't carry the negative current sum and make it zero by checking it every time.
    int arr[]={5,-4,1,4,-6};
    int n=sizeof(arr)/sizeof(int);
    subarrsum(arr,n);
}