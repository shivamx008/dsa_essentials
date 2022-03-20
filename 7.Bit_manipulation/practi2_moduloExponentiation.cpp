

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
int power(int x, int y, int mod)
{
    // your code goes here
    x=x%mod;
    int ans=1,pow=x;
 
    while(y>0){
        int c=y&1;
        if(c){
            ans=(ans*pow)%mod;
        }
        pow=(pow*pow)%mod;
        y=y>>1;
        
    }
    ans=ans%mod;
    
 return ans;   
} 

int main(){

    int ans=power(12,25,10007);
    cout<<ans;
    
}