// Here we have to find the pair whose sum is the closest to the number x
// we use the two pointer method instead going with the n^2 loops so O(n)

#include<bits/stdc++.h>
using namespace std;

pair<int,int> closestSum(vector<int> arr, int x){
    // your code goes here
    pair<int,int> s={0,0};
    int diff=INT_MAX,l=0,r=arr.size(),sum=0;
    while(l<r)
    {
        sum=arr[l]+arr[r];
        if(sum>=x)
        {
            if(diff>abs(x-sum)){
                diff=abs(x-sum);
                s={arr[l],arr[r]};
                
            }
            r--;
        }
        if(sum<x)
        {
            if(diff>abs(x-sum)){
                diff=abs(x-sum);
                s={arr[l],arr[r]};
            }
            l++;
                
        }
    }
    return s;
}

int main()
{
    vector<int> v={12,23,34,122,751,1212,43435,121211,999999};
    int x;
    cout<<"enter the number: ";
    cin>>x;
    pair<int,int> ans=closestSum(v,x);
    cout<<ans.first<<" , "<<ans.second;

}

