// we focus on the position and try to find the most worthy element from the unsorted part
//O(n^2) 

#include<bits/stdc++.h>
using namespace std;

int* selctn_sort(int arr[],int n )
{
    int i,j,current,minpos=0;
    for(i=0;i<n-1;i++)
    {
        current=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<current)
            {
                current=arr[j];
                minpos=j;
            }
        }
        arr[minpos]=arr[i];
        arr[i]=current;
    }
    return arr;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[]={2,3,4,6,7,4,5,53,5,3,2,1,368,98};
    int n=sizeof(arr)/sizeof(int);
    int* ptr=selctn_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        //cout<<*(ptr+i)<<", ";
        cout<<ptr[i]<<", "; 
    }
}