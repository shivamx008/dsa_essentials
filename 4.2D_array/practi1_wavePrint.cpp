#include<bits/stdc++.h>
using namespace std;

//given a matrix print it in reverse wave form
void reversewave(int arr[][10],int n,int m){
    int endcol=m-1;
    int row=0;

    for(int col=endcol;col>=0;col--){
        for(int i=row;i<=n-1;i++)
            cout<<arr[i][col]<<" ";

        row=n-1;col--;
        if(col<0)
            break;
            
        for(int i=row;i>=0;i--)
            cout<<arr[i][col]<<" ";
        row=0;

    }   
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

     int arr[][10]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int n=4,m=4;
    reversewave(arr,n,m);


}