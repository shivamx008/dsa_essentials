#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    int n=length.size();
    int maxi=INT_MIN,pairc=0;
    for(auto x:length)
    {
        maxi=max(maxi,x);
    }
    vector<int> freq(maxi+1,0);
    for(int i=0;i<n;i++)
    {
        freq[length[i]]++;
    }
    for(int i=0;i<maxi;i++)
    {
        int front=i-D<0?0:i-D;
        int end=i+1;
        while(front!=i)
        {
            if(freq[i]==0)
                break;
            if(freq[front]>0)
            {
                freq[i]--;
                freq[front]--;
                pairc++;
            }
            front++;
        }
        if(freq[i]>=2)
            {
                pairc=pairc+freq[i]/2;
                freq[i]=freq[i]%2;
            }
        while(end<=i+D)
        {
            if(freq[i]==0)
            break;
            if(freq[end]>0)
            {
                freq[end]--;
                freq[i]--;
                pairc++;
            }
            end++;
        }
        
    }
    return pairc;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> arr={1,3,3,6,4,4,2,4};
    int n=2;
    int ptr=pairSticks(arr,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<*(ptr+i)<<", ";
    //     cout<<ptr[i]<<", "; 
    // }
    cout<<"pairs : "<<ptr;
}

// our solution is a bit more complicated(space O(n) and O(more than n)) so we need to think in the way of just sorting and seeing if we can get the pairs by looking in the adjacent.
//https://github.com/coding-minutes/dsa-essentials-solutions-cpp/blob/master/DSA%20Essentials%20Solutions/Basic%20Sorting%20Algorithms/Chopsticks.cpp check it out.