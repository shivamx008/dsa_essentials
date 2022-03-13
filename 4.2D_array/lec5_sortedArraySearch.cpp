#include<bits/stdc++.h>
using namespace std;

//waf that searches for an element in row wise and column wise sorted 2d array.

void staircaseSearch(int arr[][4],int n,int m,int k)
{
    int col=m-1,row=0;
    while(col>0&&row<n){
        if(k==arr[row][col])
            {
                cout<<k<<" found it at "<<row <<", "<<col;
                return;
            }
        if(k<arr[row][col])
            col--;
        else
            row++;

    }
    //o(n+m). 
    cout<<"not found";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int n=4,m=5,k=34;
    //ok so here we have a array and we can go with a bruteforce attack, but why not exploit the sorted nature like binary search.
    // but then with binary search we would only use the sorted rows irrespecitve of the columns sorted status o(n * log m)
    // we need to use sorted cols as well

    // what we need is staircase search

    staircaseSearch(arr,n,m,k);




}