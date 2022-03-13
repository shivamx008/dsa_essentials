#include<bits/stdc++.h>
using namespace std;

//just find all the vowels in the string

string find_vowel(string s)
{
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        ans+=s[i];
    }
    return ans;
}

int main()
{
    string s="aifejfiseueuoanabodhi";
    string ans;
    ans=find_vowel(s);
    cout<<ans;

}