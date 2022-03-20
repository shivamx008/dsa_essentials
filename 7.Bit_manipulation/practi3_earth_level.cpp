#include<bits/stdc++.h>
using namespace std;

int earthLevel(int k)
{
    //your code goes here
    int count=0,power=1;
    while(k>0){
        int c=k&1;
        if(c){
            count++;
        }
        k=k>>1;
    }
    return count;
    
}
int main(){

}