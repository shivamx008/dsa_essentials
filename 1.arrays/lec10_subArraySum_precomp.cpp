//We have notes on this in that 5th sem copies.
//we are seeing that a lot of extra and repeated calculations are made in the innermost k loop
// SO let's try to optimise that 
#include <bits/stdc++.h>
using namespace std;

int largesubarr(int *arr,int n)
{
    int ans=INT_MIN,sum=0;
    int prefixs[n];
    prefixs[0]=arr[0];
    for(int i=1;i<n;i++)
    prefixs[i]=prefixs[i-1]+arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            //cout<<"[ ";
            // for(int k=i;k<=j;k++)
            // {
            //     sum+=arr[k];
            // }
            //as i is begining from zero we need to add a condition, we need to make sure segmentation fault dosen't occur.
            if(i>0)
            sum=prefixs[j]-prefixs[i-1];
            else
            sum=prefixs[j];
            ans=max(ans,sum);
            sum=0;
            // cout<<"]"<<"\n";
        }
    }
    return ans;
}
int main()
{

    int arr[]={4,-9,54,3,22,-4,52,12,2,-45,5,14,5};
    int size=sizeof(arr)/sizeof(int);
    int result=largesubarr(arr,size);
    cout<<"result: "<<result;
    //thus this approach works in order of n^2 time , with n space as well
}