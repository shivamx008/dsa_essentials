#include<bits/stdc++.h>
using namespace std;


//void print(int arr[][100],int n,int m)
void print(int arr[][100],int n,int m)
{
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<", ";
        }
        cout<<"\n";
     }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // let's see how to work with them, 
    //declare

    int arr[100][100];
    //     rows  cols
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    // we pick a row
        for(int j=0;j<m;j++)
        {   //and initialize it's column values.
            cin>>arr[i][j]; 
        }
    //let's pass a 2d array.it's mandatory to specify the no: of cols in the called function signature, no of rows is optional

    print(arr,n,m);// its passed by reference .

    //Now let's see how they are stored in the memory
    // In memory everuthing must be linearised, two common ways of storing the arrays - row major form, col major form.mostly row major is used
    //https://en.wikipedia.org/wiki/Row-_and_column-major_order for reference
}