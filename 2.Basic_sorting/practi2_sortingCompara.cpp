#include<bits/stdc++.h>
using namespace std;

//sort increasing if flag true, else decreasing
// i should have written a sorting technique, lets write bubble and insertion tom morning.



vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    int size=a.size();
    if(flag){
        
        int i,j,size=a.size();
        for(i=0;i<size-1;i++)
        {
            for(j=0;j<size-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    
                }
            }
        }
    //sort(a.begin(),a.end());
    }
    else{
     int i,j,size=a.size();
        for(i=0;i<size-1;i++)
        {
            for(j=0;j<size-1-i;j++)
            {
                if(a[j]<a[j+1])
                {
                    swap(a[j],a[j+1]);
                    
                }
            }
        }
    //sort(a.begin(),a.end(),greater<int>());
    }
    
    return a;
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v={3,2,4,5334,2,23,232,43,4,57667,55,23,24232};
    bool flag=true;
    v=sortingWithComparator(v,flag);
    for(auto x:v)
    {
        cout<<x<<", ";
    }
}