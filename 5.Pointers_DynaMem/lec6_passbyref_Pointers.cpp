#include<bits/stdc++.h>
using namespace std;


void watchVideo(int *views){
    
    *views++;// we deference the operator

    
}

int main(){
    int viewed=100;

    watchVideo(&viewed);
    cout<<viewed<<endl;


}