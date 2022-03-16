#include"Vector.h" // thats our header file, notice userdefined header files need  quotes and .h
#include<iostream>
using namespace std;

int main(){

    Vector<double> v(6);

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    /*so it works well , but it won't work for other types so
     we need to make our code generic and use ' Templates ' it makes it more powerful*/

    //steps are in the header file.

}