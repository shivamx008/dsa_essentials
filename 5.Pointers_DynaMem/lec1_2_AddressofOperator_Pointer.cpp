#include<bits/stdc++.h>
using namespace std;

//these are cpp concepts

int main(){
    // the address of operator '&'
    // it is also seen in bitwise and
    //Here to get the address of a operator we use '&'

    int x=10;
    cout<<"the address of var X is "<< &x;// a hexadecimal number is printed as the address

    //we can store the address using a pointer variable
    //it can hold the address of another variable. 

    int * xptr= &x;// through * compiler gets to know the that we are declaring a pointer.


    //another use of '&' and '*' is to create a reference variable and dereference variables.

    cout<<"\naddress in the xptr : "<<xptr;
    cout<<"\nthe address of xptr itself : "<<&xptr;

    //to store the address of a pointer , we need a ponter to a pointer
    int ** xxptr= &xptr;

    cout<<"\naddress in XXptr : "<<xxptr;





}