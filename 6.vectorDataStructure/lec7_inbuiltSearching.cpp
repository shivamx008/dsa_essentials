#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr={1,3,4,6,3,1,4,7,8,5};
    //let's say you wnat to find an element ,a inbuilt function to do linear search is called find and you can perfirm it on arrays and vectors, and on other containers as well

    vector<int>::iterator it=find(arr.begin(),arr.end(),1);
    if(it!=arr.end())// always check so that you don't get an index which is not present in the arrays
        cout<<"this is just the address, for the index we need to sub with baseAddress "<<it-arr.begin();

    else
       cout<<"not present";

    //O(n)

    //search function which finds the subsequence
    vector<int> subse={1,4,7};
    it=search(arr.begin(),arr.end(),subse.begin(),subse.end());// you can even give your own comparator in the 5th parameter as there could be more relaxed way of comparision other than just plian old lexico way
    //O(n)

    //we also have binary_search() which returns a boolean
    //also lower_bound and upper_bound, please look into the cpp.com dics
    

}