#include<bits/stdc++.h>
using namespace std;

//using reference variables we can pass objects by reference to other objects
// this thing can be done using pointers as well but we can use reference objects
//But we need to understand the difference 
int main(){
    int x=19;
    int y=x;
    // there are two separate locations initialized by 19,  

    int z=10;
    int &w=z;// now we have created a alias for the same location z, any changes to w will reflect in z
    //imp note, whenever we are creating a ref var , it must be initialized , it can't be just declared

    cout<<w<<"\n"<<x;
}


