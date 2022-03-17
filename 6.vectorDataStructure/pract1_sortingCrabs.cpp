#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool compareCartes(pair<int,int> c1,pair<int,int> c2)
{
    double d1,d2;
    d1=sqrt(pow(c1.first,2)+pow(c1.second,2));
    d2=sqrt(pow(c2.first,2)+pow(c2.second,2));

    return d1<d2;
}
vector<pair<int,int>> sortitbeyocth(vector<pair<int,int>> crs){
    sort(crs.begin(),crs.end(),compareCartes);
    return crs;
}
int main(){
    vector<pair<int,int>> crabs={{2,3},{1,2},{3,4},{2,4},{1,4}};
    vector<pair<int,int>> cr;
    cr=sortitbeyocth(crabs);
    for(auto i:cr){
        cout<<i.first<<" "<<i.second<<", ";
    }
}