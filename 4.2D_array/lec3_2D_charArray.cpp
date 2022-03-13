#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char numbers[][10]={
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "hundred",
        "XXMCXI"
    }; // the number of rows is optional if we are giving a initialization list as that would specify the no of rows

    //char langaa[][100];// wil show error

    //cout treats char 2d arrays diff from int 2d
    cout<<numbers[4]<<"\n";
    //can't do the same for a int 2d array as that would be semantically wrong
    int dw[2][2]={{3,56},{5,7}};
    cout<<dw[1];// this prints the starting address of the 2nd row 

}