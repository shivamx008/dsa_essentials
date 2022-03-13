#include<bits/stdc++.h>
using namespace std;

//https://www.iarcs.org.in/inoi/online-study-material/topics/prefix-sums-ramus-mango-trees.php
//ramu has to divide the field into 4 smaller fields so that the sisters can choose, (one hozizontal line and one verticalline)
//his sisters will choose the 3 bigger fields and leave him with the smallest
//so we need to maximize the smallest(minimum tress on a field)
int MangoTree02(char arr[][10],int n){  //this was someone else's solution
 
    int ans=0;
    int temp[100][100];
 
    // for creating the left most column of the temp array
    for (int i = 0; i < n; i++)
    {   
        if(arr[i][0]=='#'){
            temp[i][0]=1;
        }
 
        else{
            temp[i][0]=0;
        }
 
        if(i!=0){
            temp[i][0]+=temp[i-1][0];
        }
 
    }
 
    // for creating the top  most row of the temp array
    for (int i = 0; i < n; i++)
    {  
        if(arr[0][i]=='#'){
            temp[0][i]=1;
        }
        
        else{
            temp[0][i]=0;
        }
 
        if(i!=0){
            temp[0][i]+=temp[0][i-1];
        }
        
    }
    
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(arr[i][j]=='#'){
                temp[i][j]=1+temp[i-1][j]+temp[i][j-1]-temp[i-1][j-1];
            }
            else{
                temp[i][j]=0+temp[i-1][j]+temp[i][j-1]-temp[i-1][j-1];
            }
        }
        
    }
    
 
    for (int i=0 ; i < n ; i++)
    {
        for(int j=0; j < n; j++)
        {
            cout << temp[i][j]<<" ";
        }
 
        cout<<endl;
    }
 
/*
                 S1     |   s2
                        |
                      -------
                        |
               s3       |      s4
           
 */
 
    for (int row = 0; row < n-1; row++)
    {
        int s1,s2,s3,s4;
        int min_tree;
        for (int col = 0; col < n-1; col++)
        {
            s1=temp[row][col];
            s2=temp[row][n-1]-s1;
            s3=temp[n-1][col]-s1;
            s4=temp[n-1][n-1]-s1-s2-s3;
 
            min_tree=min(s1,min(s2,min(s3,s4)));
            ans=max(ans,min_tree);
        }
    }
    return ans;
}


int maxmin(int aux[][10],int n,int m)
{
    int i,j,ans=0;
    for(i=0;i<n;i++)
    {
        int s1,s2,s3,s4;
        int minnn;
        for(j=0;j<m;j++)
        {
            s1=aux[i][j];
            s2=aux[i][m-1]-s1;
            s3=aux[n-1][j]-s1;
            s4=aux[n-1][m-1]-s1-s2-s3;
           // minnn=min(s1,min(s2,min(s3,s4)));
            ans=max(ans,min(s1,min(s2,min(s3,s4))));
        }

    }
    return ans;
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    //let's first think of a brute force solution: we can make a cut at every position and then find the min mangos in a field, then keep a track of max
    //time complexity: 4*n^2 for finding the mangos in each partition and n^2 for making the partition at every point. O(n^2 * n^2) very slow

    /*so what can we do? 2D prefix sums
     we are going to make a auxillary matrix where at each i,j we are going to store total tress from 0,0 to i,j
     how to do that. let's try it */

    // char arr[][10]={"...#.#.",
                    // "#..#.#.",
                    // "...#..#",
                    // "##..#..",
                    // "#..#...",
                    // "...#.#.",
                    // "#....#."};

     char arr[][10]={{".##..."},
                    {"#..##."},
                    {".#...."},
                    {".##..#"},
                    {"#..##."},
                    {".#...."}};

    int aux[10][10]={0};

    //  for(int i=0;i<7;i++)
    // {
    //     for(int j=0;j<7;j++)
    //     cout<<aux[i][j]<<" ";

    //     cout<<"\n";
    // }
    if(arr[0][0]=='#')
        aux[0][0]=1;
    else
        aux[0][0]=0;

    for(int i=1,j=0;i<6;i++)
    {   
        if(arr[i][j]=='.')
            aux[i][j]=aux[i-1][j];
        else 
            aux[i][j]=aux[i-1][j]+1;
    }

    for(int i=0,j=1;j<6;j++)
    {
        if(arr[i][j]=='#')
            aux[i][j]=1+aux[i][j-1];
        else
            aux[i][j]=0+aux[i][j-1];
    }

    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            
            
            if(arr[i][j]=='.')
                aux[i][j]=aux[i][j-1]+aux[i-1][j]-aux[i-1][j-1];
            else 
                aux[i][j]=aux[i][j-1]+aux[i-1][j]+1-aux[i-1][j-1];
            
        }
    }

    // for(int i=0;i<6;i++)
    // {
    //     for(int j=0;j<6;j++)
    //     cout<<aux[i][j]<<" ";

    //     cout<<"\n";
    // }
    int ans;
    ans=maxmin(aux,6,6);
    //ans=MangoTree02(arr,6);
    cout<<"\n"<<ans;
    
}