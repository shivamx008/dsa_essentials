#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//it is used as a sub problem in many other problems
//it is basically computing a^n , 3^5=243; if we do it by simply by multiplying then it will take order of n time
// consider it 3^5=243, consider it 3^101, so rightmost one is just a, next is a^2 and the third would be a^4, but as a^2 has bit 0 so it will be ignored
// thus we use a better way, log (n)time

void fast_expo(int a,int n){
    int ans=1,pow=a,c;
    while(n>0){
        c=n&1;
        if(c)
            ans*=pow;
        pow*=pow;
        n=n>>1;
    }
    cout<<ans;
}
int main(){

    int a=3,n=5;
    fast_expo(a,n);

}