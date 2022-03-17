#include<algorithm>
#include<iostream>
#include<vector>
//#include<math.h>
using namespace std;



void rotate(vector<vector<int>>& matrix) {
      // this approach makes use of first transpose and then reverse the rows
      for(int i=0;i<matrix.size();i++){
          for(int j=0;j<matrix.size();j++)
          {
              if(i!=j && i<j)
                swap(matrix[i][j],matrix[j][i]);
          }
      }
      for(int i=0;i<matrix.size();i++){
          int fr=0,en=matrix.size()-1;
          while(fr<=en){
              swap(matrix[i][fr],matrix[i][en]);
              fr++;
              en--;
          }
      }
      
              
}


int main(){
    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};

    rotate(matrix);

    for(int i=0;i<matrix.size();i++){
          for(int j=0;j<matrix.size();j++)
          {
              cout<<matrix[i][j]<<" ";
          }
          cout<<"\n";
        }
    //check the solution provided by dsa essentials it is also nice



}