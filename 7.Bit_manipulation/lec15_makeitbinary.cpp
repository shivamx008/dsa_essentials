//convert a decimal number to a binary number by using bitwise operators#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//what we can do is extract the last bit and just add the last bit.
int converttobin(int n){
    int pow=1,ans=0;
    while(n>0){
        int l=n&1;
        ans+=pow*l;
        pow*=10;
        n=n>>1;
    }
    return ans;

}

int main(){
    int n;
    cin>>n;

    int ans=converttobin(n);
    cout<<ans;



}