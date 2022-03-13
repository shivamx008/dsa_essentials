#include <bits/stdc++.h>
using namespace std;
int main(){
    int marks[100];
    int n;
    cout<<"enter the no of stdents (less than 100)";
    cin>>n;//input for exact numbers
    //assign some value
    marks[0]=-1; 
    //input for array
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<", ";
    }
}
