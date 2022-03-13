#include<bits/stdc++.h>
using namespace std;
//run length encoding for string compression 
//if compressed string is bigger than original return original 
//input: aaabbbccdddd
//output: a3b3c2d4

//we just solved something like this in practi compressed string this is prateek bhaiya's solution
//i need to add 1 for one letter as well unlike the practice ques 
string compressString(string str)
{
    int n=str.length();
    string output;
    for(int i=0;i<n;i++)
    {
        int count=1;
        while(i<n-1 and str[i+1]== str[i]){
            count++;
            i++;
        }

        output+=str[i];
        output+=to_string(count);
    }
    if(output.length()>str.length()){
        return str;
    }
    return output;
}
int main()
{

string s="abbbbbbbbbbb";//a 1 b 11
string ss=compressString(s);
cout<<ss;
}
