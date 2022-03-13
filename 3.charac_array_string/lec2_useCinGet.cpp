#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    //as we saw in the last lecture we saw that cin delimts at encountering a space
    //once we enter the string of characters they go into a part of the memory called the input buffer (https://www.computerhope.com/jargon/i/inputbuf.htm), from where cin starts reading,
    //as soon as it sees a white space or a new line it stops and stores onl 'hello' and adds a null char

    //So we use cin.get() which accepts one char at a time , all types of characters

    char sentence[1000];
    char temp=cin.get();//reads just one char from the input buffer
    while(temp!='\n')
    {
        cout<<temp;
        temp=cin.get();
    }
    //if we changed the condition to '#' then temp will accept input untill hash is encountered.

    char temp1=cin.get();
    while(temp1!='#')
    {
        cout<<temp1;
        temp1=cin.get();
    }//  so we get output in chunks because once we hit a new line our characters enter the input buffer and our code then reads letter by letter including the \n and prints it with the \n
    
    //let's try to store a para inside sentence
    cout<<"\nenter a para: ..\n";
    char temp2=cin.get();
    int i=0;
    while(temp2!='#')
    {

        //cout<<temp;
        sentence[i]=temp2;
        i++;
        temp2=cin.get();

    }
    sentence[i]='\0';
    cout<<"\n"<<sentence;



}   