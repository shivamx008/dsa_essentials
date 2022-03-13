#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> sorting_cartesian(vector<pair<int,int>> v)
{
    int i,j,sort,oripos;
    for(i=1;i<v.size();i++)
    {
        oripos=i;
        sort=i-1;
        pair<int,int> temp=v[i];
        for(j=sort;j>=0;j--)
        {
            if(v[j].first>temp.first)
            {
                v[j+1]=v[j];
                oripos=j;

            }
            else if(v[j].first==temp.first)
            {
                if(v[j].second>temp.second)
                {
                    v[j+1]=v[j];
                    oripos=j;
                }
            }
        }
        v[oripos]=temp;
    }
    return v;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int,int>> v={{2,4},{5,7},{5,2},{1,4},{-1,4},{1,1}};
    //bool flag=true;
    v=sorting_cartesian(v);
    for(auto x:v)
    {
        cout<<x.first<<", "<<x.second<<"  ";
    }
}