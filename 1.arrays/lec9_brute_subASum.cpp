#include <bits/stdc++.h>
using namespace std;

int largesubarr(int *arr,int n)
{
    int ans=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            //cout<<"[ ";
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            ans=max(ans,sum);
            sum=0;
            // cout<<"]"<<"\n";
        }
    }
    return ans;
}
int main()
{
// a subarray is a contiguous subpart of an array
// just like we saw in the last lec how to generate all pairs of indexes
// Now let's print the subarray which has the largest sum
    int arr[]={4,-9,54,3,22,-4,52,12,2,-45,5,14,5};
    int size=sizeof(arr)/sizeof(int);
    int result=largesubarr(arr,size);
    cout<<"result: "<<result;
    // almost n^2 subarrays and n for printing so O(n^3) 
}