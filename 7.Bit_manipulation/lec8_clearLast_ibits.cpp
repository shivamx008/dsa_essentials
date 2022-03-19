#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void clearlast_ibits(int &n,int i)
{
    // so 1111 is n and i is 2 so the o/p should be 1000, for this the mask that we need has to have 000 and after that all ones
     // so take ~0 (which is all 1s) and do <<  i+1 times

    int mask = ~0 << (i+1);
    n= n&mask;

}

int main(){
    int n=15;//1111

    clearlast_ibits(n,2);
    cout<<n;// 8


}