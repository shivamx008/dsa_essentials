#include<bits/stdc++.h>
using namespace std;


int main(){
    //use of * as a dereferencing operator.
    // & of Bucket/Varibale => Address
    // * of address => Bucket(what's inside) , when we want to access a value through it's address

    int x= 22;
    int *xptr=&x;

    cout<<"the value of x :" << *xptr <<" same thing again "<<*(&x);

    //Null pointer

    int *p=0;int *q=NULL; // if you tried dereferenc this you will get a segmentation fault 
}
