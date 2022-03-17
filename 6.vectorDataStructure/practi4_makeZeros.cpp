#include<algorithm>
#include<iostream>
#include<vector>
//#include<math.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
        int arri[arr.size()]={0}, arrj[arr[0].size()]={0};
    
        for(int i=0;i<arr.size();i++){
          for(int j=0;j<arr[i].size();j++)
          {
              if(arr[i][j]==0)
              {
                  arri[i]=-1;
                  arrj[j]=-1;
              }
                
          }
        }
        for(int i=0;i<arr.size();i++){
            if(arri[i]==-1)
                fill(arr[i].begin(),arr[i].end(),0);
            if(arrj[i]==-1)
            for(int j=0;j<arr[i].size();j++)
            {
                arr[j][i]=0;
            }
        }
        
    return arr;
              
}
    

int main(){

}