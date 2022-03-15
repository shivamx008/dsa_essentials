#include<bits/stdc++.h>
using namespace std;

 //dynamic mem allocation
int main(){

   
    int a[100];// this allocates memory on the stack frame, and is static in nature
    //allocated by the commpiler, when the use of the function is gone then the memory is also deallocated by the compiler

    //But sometimes we don't know the exact size we need at the copile time so we go for 
    // Dynamic (runtime) mem allocation

    int n;
    int *x= new int[n];
    // *n will be allocted on the stack frame during compile time, while the new int[n] will allocate an array on the heap during runtime, ' new ' means new mem req during runtime 
    // the thing here is that once the function is destroyed on the call stack, the array will still be present on the heap so we need to free it up, programmers job is to free this

    //How to delete this mem, the x pointer using 8bytes of mem will get deleted by the compiler
    delete[] x;

    // with new keyword we can use “nothrow” in parameter because if due to mem leak or other reason there is not enough mem, then nothrow makes it return null to the pointer
    int *a =new(nothrow) int[100];

    delete []a;

    //memory leak. if a function which uses dynamic mem is called iteratively many times then a big chance is there that, mem leak can happen and storage can get full , if we don't delete the allocated mem after deleting 
}