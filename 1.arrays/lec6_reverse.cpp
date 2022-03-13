#include <bits/stdc++.h>
using namespace std;
void rev_arr(int *arr, int n){

    int s=0,e=n-1;
    while(s<e)
    {   
        arr[s]=arr[s]+arr[e];
        arr[e]=arr[s]-arr[e];
        arr[s]=arr[s]-arr[e];//swapping
        s++;
        e--;
    }
}
int main(){
    //here we want to reverse the order of elements in the array
    // we can take up an extra array and copy in reverse order or we can use the two iterator method
    int arr[]={43,35,5,6,7,4,2,2,3,5,5};
    int n=sizeof(arr)/sizeof(int);

    rev_arr(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // this takes n/2 time so it is O(n)complexity.
}