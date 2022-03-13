#include<bits/stdc++.h>
using namespace std;

//This can work in linear time, O(No of ele + range), this is useful in problems where we have data bound in a certain range
//watch the video again if you want it's just 4mins,
//we first make an array of the lenght of range and then traverse over the original array and register the frequency
// then traverse over the frequency array and update the orignal array in the way you want

void counting_sort(int arr[],int n,int range)
{
    int i,j,ori_pos=0;
    int freq[range]={0};
    for(i=0;i<n;i++)
    { 
        freq[arr[i]]++;//counting how many of each element in each the array
    }
    //puting back the elements in a sorted way
    for(j=0;j<range;j++)
    {
        if(freq[j]>0)
        {
            for(i=1;i<=freq[j];i++)
            {
                //ori_pos keeps track of the original array amd where we have to update
                arr[ori_pos]=j;
                ori_pos++;
            }
        }
    }
}


int main()
{
    int arr[]={4,6,43,6,3,17,9,0,4,2,102,9,6,67,76};
    int n=sizeof(arr)/sizeof(int);
    counting_sort(arr,n,103);// as the largest number is 102 so range 0 to 102 total 103 things

    for(int x:arr)
    cout<<x<<", ";


}