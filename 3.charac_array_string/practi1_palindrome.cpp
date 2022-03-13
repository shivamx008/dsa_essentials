#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    string revs;
    revs=str;
    int j=revs.length()-1;
    int i=0;
    for( i=0;i<=j;i++,j--)
    {
        
        swap(revs[i],revs[j]);
    }
    if(revs.compare(str)==0)
    {
        return true;
    }
    else
        return false;
    
}

int main()
{
    string s;
    getline(cin,s);// best way rn to enter a string, can add a delimter as well.

    if(isPalindrome(s))
    {
        cout<<"it's a palindrome string";
    }
    else
        cout<<"not a palin";
}