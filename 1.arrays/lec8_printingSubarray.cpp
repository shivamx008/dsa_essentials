#include <bits/stdc++.h>
using namespace std;
void printsubarr(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"[ ";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<", ";
            }
            cout<<"]"<<"\n";
        }
    }
}
int main()
{
// a subarray is a contiguous subpart of an array
// just like we saw in the last lec how to generate all pairs of indexes
    int arr[]={4,5,54,3,22,4,72,41,2,45,5,14,5};
    int size=sizeof(arr)/sizeof(int);
    printsubarr(arr,size);
    // almost n^2 subarrays and n for printing so O(n^3) 
}