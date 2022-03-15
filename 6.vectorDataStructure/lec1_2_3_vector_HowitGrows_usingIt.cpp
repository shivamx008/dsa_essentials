#include<vector>
#include<iostream>
using namespace std;

int main()
{
    /*vectors are sequence container representing arrays that can change in size
    every popular language has there own implementation of common data structures, eg cpp has STL, java has collections
    in problem solving it is fundamental to understand how to use the data structure , how is the data structure is implemented
    SO We will buiild our own header file to simulate the same data structures*/

    //like arrays , elements are accessed at o(1), but it grows and so we will build the same functionality

    /*How does a vector grows.
    eg we have a vector of size four and it is full with elements
    and we have to insert a new element, So in a part of the memory where there is enough space (reallocation may happen) , an dynamic array of double the current size is created 
    and the elements are one by one copied into it, after that the old one is deleted, so O(n) */
    // so the Amortized time complexity can be reduced (even though it is constant), if we know that we need to store 1000 elements, then we can initialize the vector by 1000 and if we actualy use 1500 ele then we have to double just once.
    //Do visit the cpp dot com site
    
    // Let's see how to use it from STL in order to implement it in our own header file

    vector<int> arr1;
    cout<<arr1.size()<<"\n";//0

    vector<int> arr2(100);
    cout<<arr2.size()<<"\n";//100

    fill(arr2.begin(),arr2.end(),0);// fills with 100 0

    //fill constructor
    vector<int> arr4(10,5); // fills with 5

    vector<int> arr3={1,2,3,4,5};
    cout<<arr3.size()<<"\n";//5

    arr3.push_back(6);

    cout<<arr3.size()<<"\n";//6
    cout<<arr3.capacity()<<"\n";//10 it doubled

    arr3.pop_back();// size decreases by 1, and 6 is gone

}

