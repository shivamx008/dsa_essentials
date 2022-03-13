#include<bits/stdc++.h>
using namespace std;

//in this question we are meant to print occurance of each character just once eliminating the duplicates.
//i was have done only for small case alphas.
//we should try the map implementation of this question.

string remov_dupli(string s){
    int alphas[26]={0};
    for(int i=0;i<s.length();i++){
        alphas[s[i]-97]++;
    }
    string ans="";
    for(int i=0;i<26;i++)
    {
        if(alphas[i]>0)
        {
        //cout<<char(i+97);
        ans+=char(i+97);
        }
    }
    return ans;
}

int main()
{
    string s="geeksforgeeks";
    string ans;
    ans=remov_dupli(s);
    cout<<ans;

}