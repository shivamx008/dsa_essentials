#include <bits/stdc++.h>
using namespace std;
int bin_search(int *arr,int len,int k)
{
    int start=0,end=len-1,mid=0;
    // our search space should be monotonic  meaning it should be non decreasing or non increasing
    while(end>=start)
    {
        mid=(start+end)/2;
        if(arr[mid]==k)
            return mid;
        if(arr[mid]>k)
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}
int main(){
    //this search works on sorted array
    // when we are at a point in the search we can choose to search n the direction of the key may being present
    // we divide the array into two parts and move again by dividing the selected part and so on
    //worst case n->n/2->n/4->n/8 ...... 1=n/2^k so k=log2(n)

    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index=bin_search(arr,n,key);
    if(index!=-1){
        cout<<"present at "<<index;
    }
    else
        cout<<"present at"<<index;
} 
