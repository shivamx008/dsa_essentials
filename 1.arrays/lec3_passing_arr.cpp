#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)// so to make this more explicitly look pass by reference use
//void printarray(int * arr,int  n) 
{
    cout<<sizeof(arr)<<" ";
    //this prints 8, why ?
    //   because the array is not passed by value in cpp, it's only passed by reference, and we printed the size of the pointer
    // this is why we have to accept the size of the array as well , to be able tp iterate
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,8,6,7};

    //lets find the size of the array
    int size = sizeof(arr)/sizeof(int);//32/4 bytes of int
    cout<<sizeof(arr)<<"\n"; //prints 32
    // but if we pass arr
    printarray(arr, size);

}