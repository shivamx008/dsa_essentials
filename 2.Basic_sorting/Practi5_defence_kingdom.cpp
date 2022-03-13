#include<bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=fk1yIirivEo, it's about finding the rectangle with the largest area undefended
// so we add the boundaries and sort the x and y coordinates to get the largest gap between defense lines and just multiply them.

int kingdom_penalty(vector<pair<int,int>> v,int h,int w)
{
    vector<int>x;
    vector<int>y;
    x.emplace_back(0);
    y.emplace_back(0);

    int maxx=INT_MIN,maxy=INT_MIN;
    for(auto i:v)
    {
        x.emplace_back(i.first);
        y.emplace_back(i.second);

    }

    x.emplace_back(w+1);
    y.emplace_back(h+1);

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    for(long long i=0;i<x.size()-1;i++){ maxx=max(maxx,abs(x[i+1]-x[i]-1));}
    for(long long i=0;i<y.size()-1;i++){ maxy=max(maxy,abs(y[i+1]-y[i]-1));}

    
    return(maxx*maxy);
}

int main()
{
    vector<pair<int,int>> v={{3,8},{11,2},{8,6}};
    int h=8,w=15,ans;
    ans=kingdom_penalty(v,h,w);
    cout<<"the penaltea is : "<<ans;
}