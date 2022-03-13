//Now we are going to talk about the inbuilt sorting function that cpp provides us
//most mordern languages have such an functionality built-in
/*it is available in #include<algorithm>, in complex problems we won't have time to write an efficient sorting algo by ourselves 
so we can freely use this O(nLogn) sort, use it by calling ' sort( staring of array,end excluded) '  */

#include<bits/stdc++.h>
 using namespace std;

bool compara(int a,int b){

  if(a>b)
    return true;
  else
    return false;

}

int main()
{
    int arr[]={86,2,34,6,44,3,2,1,76,5,7,5,4,4,3,5,9,9};
    int  n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);
    //for(int x: arr){
      for(int i=0;i<n;i++)
        // cout<<x<<", ";
        cout<<arr[i]<<", ";
    
    // now what if we change the output as per our wish, let's say descening order so, 
    // we can use the reverse method on qrr

    reverse(arr,arr+n);
    cout<<"\nin reverse\n";
    for(int i=0;i<n;i++)
        // cout<<x<<", ";
        cout<<arr[i]<<", ";
    
    // But we can gain more control by using comparators , v.v.v.v.v.imp
    // so sort accepts a function as a parameter in the third place
    // so lets build descending comparision function, remember to return true on what you want
    sort(arr,arr+n,compara);// this 'compara' is not a function call , but we are passing a function to the sort func where it will be called multiple times
    cout<<"\nin reverse by compara\n";
    for(int i=0;i<n;i++)
        // cout<<x<<", ";
        cout<<arr[i]<<", ";

    //there is also a inbuilt comparator as well
    sort(arr,arr+n,greater<int>());
    cout<<"\nusing the inbuilt compara\n";
    //for(int x: arr){
      for(int i=0;i<n;i++)
        // cout<<x<<", ";
        cout<<arr[i]<<", ";


}

    
