#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void clearBitsinRange(int &n,int i,int j){
    // so for a num loke 11101010111 and i=1 and j=6, we need a mask like 11110000001 

    int mask = (~0) << (j+1);// this has cleared till j but now we need a 
    int mask_behind= pow(2,i)-1; // makes the second part of the mask by making 10 then by subtraction to 01
    mask= mask | mask_behind; // mask now becomes 11110000001
    n = n & mask; 
}

int main(){
    int n=1879;

    clearBitsinRange(n,1,6);
    cout<<n;//1793


}