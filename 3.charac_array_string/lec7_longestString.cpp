#include<bits/stdc++.h>
using namespace std;

// problem: read n strings and print the largest string, each string can have upto 1000 characters

int main()
{
    // we don't need to store all the strings , we just need to keep track of largest so far

    int n;//no of strings
    cin>>n;

    int maxlen=0;
    char sentLarge[1000];

    while(n--){
        cin.getline(sentLarge,1000);
        cout<<sentLarge<<endl;
    }
    // the above code when asked to enter 3 sentences does not take 3 but only 2
    /*why , because, when we press 3 and press enter, in the input buffer 3\n is present,
     cin for n takes the 3 but cin.getline which terminates at \n take the empty string with \n, and goes to the next iteration and we only get to input n-1 strings*/

    //this problem is very hard to debug if done by mistake
    //So how to deal with this situation, either we run the loop once more, or we use cin.get to consume the \n 

    cout<<"enter n again\n";
    cin>>n;
    
    cin.get();
    
    while(n--){
        cin.getline(sentLarge,1000);
        int len=strlen(sentLarge);
        if(len>maxlen)
            maxlen=len;
        cout<<sentLarge<<endl;
    }

    cout<<"the largest length "<<maxlen;
    

}