#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
//we are given an array containing n numbers, all the numbers are present twice execpt for one number which is only present once,
// find the unique number without taking any extra spaces.

int xoring(vector<int> v)
{
    // your code goes here
    sort(v.begin(),v.end());
    int n=v.size();
    int xr=0,i=0;
    while(i<n){
        xr=v[i]^v[i+1];
        if(xr!=0){
            return v[i];
        }
        i+=2;
    }
}

    

int main(){
    vector<int> v={1,2,67,32,32,1,2};
    int ans=xoring(v);
    cout<<ans;//1,1,2,2,32,32.67

}