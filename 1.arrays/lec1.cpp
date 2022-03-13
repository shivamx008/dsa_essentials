#include <bits/stdc++.h>
using namespace std;

// Suppose you wanted to store marks of 5 friends 
// we can make 5 variables and it would be fine

/*  but let's say there is something of a bigger scale, storing marks of the whole department, then making variables is not great
we need to have them under a single name for easy reference 
Here we can use an array */
// It is a sequential and contiguous allocation of memory for elements of a type of data, referred under the same name with index
int main(){
//create, datatype arr_name[size];
    // statically defining
    int a[100];// allocates 100 4byte cells of int, this array will have garbage value
    int aa[100]={0};// sets/ initializes all to zero,, can put anything you like {-1},{1}, good practice
    int a2[100]={1,2,3};// first three elements would be 1,2,3 and the rest would be zero
    int a3[]={1,2,3,5,6,7};// the size is calculated from the initialization list
    //int a[]; // this is not allowed

    int i=0;
    char ch[100]="applee";// here we can store 99 characters but the last is reserved for null '\0'
    while(ch[i]!='\0'){
        cout<<ch[i]<<endl;
        i++;

    }
    
}