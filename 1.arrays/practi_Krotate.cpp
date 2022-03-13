//we can go with the iterative solution where implement rotate function and do k*n operations 
// Here we are doing the reversing method mentioned in our book from prog path, rev whole then rev k and end-k path separately.

#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int s=0,len=a.size()-1,e=a.size()-1;
    k=k%(e+1);
    int other=k;
    while(e>s)
    {
        swap(a[e],a[s]);
        e--;
        s++;
        
    }
    int i=0;
    while(k>i){
        swap(a[i],a[k-1]);
        k--;
        i++;
    }
    
    while(len>other)
    {
        swap(a[other],a[len]);
        len--;
        other++;
    }
    
    return a;
    
    
}