#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

/*the question in hand is that, you are given two 32-bit numbers , n and m and two bit positions i and j
write a method to set all the nits between i and j in Nequal to M.
such that m becomes a substring of n locationed between i and j */


void replace_itojBits(int &n,int m,int i,int j){
    //first we need to clear or set the bits from i to j in n
    //let's go woth clear
    int masc=(~0)<<(j+1);
    int masc1=(pow(2,i)-1);
    masc=masc | masc1;
    n=n&masc;
    //it's now cleared
    m=m<<i;
    n=n|m;
    

}

int main(){
    int n=321;//101000001
    int m=26; //11010
    int i=2,j=6;

    replace_itojBits(n,m,2,6);
    cout<<n;// 361 , 10 11010 01
    




}