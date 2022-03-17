#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool price(pair<string,int> f1, pair<string,int> f2){
    return f1.second<f2.second;

}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    if(S.compare("price")==0)
        sort(v.begin(),v.end(),price);
    else
        sort(v.begin(),v.end());
    
    return v;
}
int main(){
    
}
