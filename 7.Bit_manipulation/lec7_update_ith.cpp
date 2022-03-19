#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//So what if we get the position and the value that we want to put in a partiular position
//eg n is 110111 and pos is 3 and change to 1 or change pos 2 to 0
// so we know both the functionality and we need to combine those

// so can use if else with the set and clear funcs, but we can use a general way as well
// we can clear the bit at pos and then do OR with 1 at that bit for val=1, else or with zero by val<<i

void update_ith(int &n,int val,int pos)
{
    int mask=~(1<<pos);
// for clearing    n=n&mask;
    n=n&mask;

    val=(val<<pos);

    n= n | val; // updates wrt val


}

int main(){
    
    int n=13;
    update_ith(n,1,1);

    cout<<n;//15

}