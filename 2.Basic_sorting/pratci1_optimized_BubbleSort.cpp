#include<bits/stdc++.h>
using namespace std;

//here we try to come out of the loop if the the array is already sorted , i.e there was not one swap in the first go then we come out of the loop 

int* bubble_sort(int arr[],int n)
{   
    
    int i,j,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
        if(!flag)
        {
            cout<<"it's sorted no need for more iterations at i: "<<i<<"\n";
            return arr;
        }
    }
    return arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(int);
    int* ptr=bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        //cout<<*(ptr+i)<<", ";
        cout<<ptr[i]<<", "; 
    }
}