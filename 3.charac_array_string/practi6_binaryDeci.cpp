#include<bits/stdc++.h>
using namespace std;

//just a binaty to decimal convertor
int bintodeci(string s)
{
    int last=s.length()-1,power=0,ans=0;
    for(int i=last;i>=0;i--){
        if(s[i]=='1'){
            ans+=pow(2,power);
        }
        power++;
    }
    return ans;
}
int main()
{
    string s="11010101";
    int ans=bintodeci(s);
    cout<<ans;
}