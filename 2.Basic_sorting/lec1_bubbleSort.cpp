//there are 3 basic sorting algorithms , bubble, selection and insertion sort.
// other counting sorts are there like merge, quick and heap

#include<bits/stdc++.h>
using namespace std;
//bubble sort
//inspired by the idea of rocks sinking and light airy bubles rising from the depths of the lake
//      key idea -> take the larger element to the end by repeatedly swapping the adjacent elements
// we are swapping in the j loop where we swap a[j]and a[j+1] so we need to go from 0 to n-i-1, (if n=5, then in the 1st go j=0 to 3)
// we need to traverse the array n-1 times beacuse at the nth time only one element which is the most smallest or largest(if descending) remains
// thus need to sort the array only n-1 times
//O(n^2) worst

int* bubble_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
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
    int* ptr=bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        //cout<<*(ptr+i)<<", ";
        cout<<ptr[i]<<", "; 
    }
}