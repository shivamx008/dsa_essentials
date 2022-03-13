#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascals_tri(int n)
{
    vector<vector<int>> triangle;
    int fir=0,sec=0;
    for(int i=0;i<n;i++)
    {
        vector<int> line;
        for(int j=0;j<=i;j++)
        {
            if(i==0&&j==0)
                line.push_back(1);
            else
            {
                if(j-1<0)
                {
                    fir=0;
                    sec=triangle[i-1][j];
                }
                else if(j==i)
                {
                    fir=triangle[i-1][j-1];
                    sec=0;
                }

                else
                {
                    fir=triangle[i-1][j-1];
                    sec=triangle[i-1][j];
                }
                
                line.push_back(fir+sec);
                
            }
        }
        triangle.push_back(line);
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<triangle[i][j];
        }
        cout<<"\n";
    }

    return triangle;
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num_lines;
    cin>>num_lines;

    vector<vector<int>> op;
    op=pascals_tri(num_lines);
}
