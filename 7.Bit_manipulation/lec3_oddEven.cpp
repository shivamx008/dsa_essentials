#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//write a expression to check whether a number is odd or even
    
int main(){
    //so we know that every odd number has the last bit as one, so if we somehow extract the last one to check whethere the number is even if zero or odd if one

    int i=10;

    int ans=i&1; // 1010 & 0001 will give 0000, so even , if it was 1011 & 0001 then ans would have been 1

    if(!ans)
        cout<<"Even number";
    else
        cout<<"Odd number";
}