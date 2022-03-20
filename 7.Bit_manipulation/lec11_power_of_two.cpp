#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// let's see how to use bitwise operator to see if a number is power of two or not
//16 in bin looks like 10000, and the prev number is 01111, so doing the and of these two will give a zero, this is not true for any other pair

int main(){
    int n;
    cin>>n;
    int m=n-1;
    if(!(n & m))
        cout<<"It's the power of 2 ";
    else
        cout<<"nyet";

}
