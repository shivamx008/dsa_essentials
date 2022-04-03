// you can use includes, for example:
#include<bits/stdc++.h>
#include <sstream>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

string solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stringstream str(S);
    int minl=1000000;
    string ans;
    for(string i;getline(str,i); )
        {
            string owner=i.substr(0,6);
            if(owner.compare("  root")==0)
            {
                int perm= i.find("r--");
                if(perm != -1)
                {
                    int dot=i.find(".");
                    string type=i.substr(dot);
                    if(type.compare(".doc") == 0 || type.compare(".xls") == 0||type.compare(".pdf") == 0){
                        int space=i.find_last_of(" ");
                        //cout<<i.substr(space+1)<<" ";
                        string name=i.substr(space+1);
                        if(name.length()<minl)
                        {
                             minl=name.length();
                             ostringstream str1;
                             str1<<minl;
                             ans=str1.str();   
                        }
                    }
                }
            }
    

        }
    return ans;
}   



 
int main() {
	// your code goes here
	int a,b=20;
	a=90/20;
	cout<<a;
	return 0;
}