#include<bits/stdc++.h>
using namespace std;

int main(){
    //2d array
    vector<vector<int>> arr={
        {1,2,3},
        {4,5,6},
        {7,8,9,10},
        {11,12}
    };
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(auto x:arr)
    {
        for(auto i:x)
            cout<<i<<" ";
        cout<<"\n";
    }
}