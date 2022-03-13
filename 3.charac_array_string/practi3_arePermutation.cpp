#include<bits/stdc++.h>
using namespace std;

// you are given two strings , are are asked to check whether the two strings are permutations of each other or not.
//here i just did for strings having small case alphabets.

bool are_permutation(string a, string b)
{
    int alpha[26]={0};
    if(a.length()!=b.length())
    {
        return false;
    }
    else
    {
        for(int i=0;i<a.length();i++)
        {
            alpha[a[i]-97]++;
        }
        for(int i=0;i<b.length();i++)
        {   
            alpha[b[i]-97]--;
            if(alpha[b[i]-97]<0)
                return false;
        }
        return true;
    }

}

int main()
{
    string a="tesst",b="tesdfst";
    if(are_permutation(a,b))
        cout<<"true";
    else
        cout<<"false";

}