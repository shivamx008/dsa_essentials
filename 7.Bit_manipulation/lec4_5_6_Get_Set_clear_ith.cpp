#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void getithbit(int n,int i)
{
    //so if we & n with with a number that has a one at that bit, we can surely check if the n has o or 1 at that place
    //how to get that number to & with, we take 1 and left shift till i, 

    int mask;
    mask=(1<<i);
    int ans=n & mask;

    if(!(n & mask ))
        cout<<n<<" has "<<0<<" at "<<i;
    else
        cout<<n<<" has "<<1<<" at "<<i;

}

void set_ith_bit(int &n,int pos){
    // eg we want to set the first bit to 1, so  that it becomes 111
    //the mask we need is created the same way

    int mask=( 1<<pos);

    n= ( n|mask);// so if we do OR of 101 and 010 we get the 111


}

void clear_ith(int &n,int pos){
    // for eg we have 13 = 1101, so we have to make it 1001 if pos =2 ,
    // so we need to & 0 at 2 to get 0, so the mask is ~ of 1<<pos = 1011, so the & of 1101 and 1011 is 1001 what we need


    int mask= ~(1 << pos);
    n=n&mask;

}

int main(){
    // in a binary representation the numbering of bits is done form the right hand side from zero th bit, 
    // so we can design functions to get the value of the ith bit, set the value of the ith, and update as well

    int n;
    int pos;// eg 2
    cin>>n>>pos;
    //get the ith

    getithbit(n,pos);

    //set the ith

    set_ith_bit(n,pos);// to set means to make it one
    cout<<" "<<n;// stil 5
    //clear the ith

    clear_ith(n,pos);
    cout<<" "<<n;//1

}