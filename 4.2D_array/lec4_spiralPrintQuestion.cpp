#include<bits/stdc++.h>
using namespace std;

//waf that takes in n,m 2d array, and print the all array elements in a spiral order https://media.giphy.com/media/k9nsIRK8hUfLi/giphy.gif
//for e.g a matrix row major has 1-16 ele as numbers then print 1 2 3 4 8 12 16 15 14 13 9 5 7 11 10
//we are completing the boundary traversal in one iteration, 
//Always think about what would happen if the matrix dimen are odd, and if one dimen is very big than the other dimen


void spiralPrint(int arr[][10],int n,int m){
    //the four pointers of the boundary of the matrix
    int startrow=0;
    int endrow=n-1;
    int startcol=0;
    int endcol=m-1;
    int i;
    while(startcol<=endcol && startrow<=endrow ){

        //first row
        for(i=startcol;i<=endcol;i++)
        {
            cout<<arr[startrow][i]<<" ";
        }
        //last col
        for(i=startrow+1;i<=endrow;i++){
            cout<<arr[i][endcol]<<" ";
        }
        //last row
        for(i=endcol-1;i>=startcol;i--){
            if(startcol==endcol)// when there are odd numbers of cols, the middle might get printed twice , so to escape that, a break
                break;
            cout<<arr[endrow][i]<<" ";
        }
        //first col
        for(i=endrow-1;i>startrow;i--){
            if(startrow==endrow)// when there are od num of rows same logic as we did for cols
                break;
            cout<<arr[i][startcol]<<" ";
        }
        startcol++;
        startrow++;
        endrow--;
        endcol--;

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
    spiralPrint(arr,n,m);
}