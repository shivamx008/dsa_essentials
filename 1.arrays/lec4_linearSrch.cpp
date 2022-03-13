#include <bits/stdc++.h>
using namespace std;

int linear_ser(int *arr,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        //if(*(arr+i)==k)
        if(arr[i]==k)
        return i;
    }
    return -1;
}


int main(){
    //searching algorithm to find the index of the element in a given array
    //linear search is a brute force technique, where we go from one end to another to check 
    int arr[]={1,2,3,4,5,6,7,8,9,0,11,12,13};
    int key=10;// finding the elements
    // now we wil write a function to do linear search and look foe the position of key if present
    int ans= linear_ser(arr,13,key);
    cout<<ans;
    //O(n) no of operations is number of elements of array 
}