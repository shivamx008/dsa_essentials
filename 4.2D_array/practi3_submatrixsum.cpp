#include<bits/stdc++.h>
using namespace std;
//preprocess the matrix such that submatrix sum can be queried in o(1) time, using the top left and the bottom right 

//our soln is not great, it works but there is something missing, the dsa essen solution is great, the pre sum it finds is different from ours
//great now it's fine
int summ(vector<vector<int>> v, int sr,int sc, int er, int ec)
{
    int n,m;
    n=v[0].size();
    m=v.size();
    int aux[n][m];

    aux[0][0]=v[0][0];

    //first rw
    for(int i=0,j=1;j<n;j++)
    {
        aux[i][j]=aux[i][j-1]+v[i][j];
    }

    //first cl
    for(int i=1,j=0;i<n;i++)
    {
        aux[i][j]=aux[i-1][j]+v[i][j];
    }

    //now the whole array

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            aux[i][j]=v[i][j]+aux[i-1][j]+aux[i][j-1]-aux[i-1][j-1];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<aux[i][j]<<" ";
        cout<<"\n";
    }

    int sum ;



    if (sr>0 && sc>0 && er>0 && ec>0)
        sum=aux[er][ec]-aux[sr-1][ec]-aux[er][sc-1]+aux[sr-1][sc-1];
    else if(sr==0 && sc==0)
        sum=aux[er][ec];
    else if(sr==0 )
        sum=aux[er][ec]-aux[er][sc-1];
    else if(sc==0 )
        sum=aux[er][ec]-aux[sr-1][ec];
    
    return sum;
    

    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout<<summ(vect,1,1,2,2);

}