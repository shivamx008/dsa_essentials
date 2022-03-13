//here we are given a route based on the cartesian directions and we have to shorten it if possible to reach the destination
//this is a string processing prob
#include<bits/stdc++.h>
using namespace std;

void displacement(char *ch,int n)
{
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='N' or ch[i]=='n')
        y++;
        else if(ch[i]=='S' or ch[i]=='s')
        y--;
        else if(ch[i]=='E' or ch[i]=='e')
        x++;
        else if(ch[i]=='W' or ch[i]=='w')   
        x--;
    }
    cout<<x<<" "<<y<<endl; 
    while(y!=0)
    {
        if(y<0){
            cout<<"S";
            y++;
        }
        else
        {
            cout<<"N";
            y--;
        }
    }
     while(x!=0)
    {
        if(x<0){
            cout<<"W";
            x++;
        }
        else
        {
            cout<<"E";
            x--;
        }
    }
}
int main()
{
    char route[1000];
    cin.getline(route,1000);
    displacement(route,strlen(route));
}